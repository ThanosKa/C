#include "quad.h"

quad* quads = (quad*)0;
unsigned total = 0;
unsigned int currQuad = 0;

#define EXPAND_SIZE 1024
#define CURR_SIZE (total * sizeof(quad))
#define NEW_SIZE (EXPAND_SIZE * sizeof(quad) + CURR_SIZE)

void expand(){
    assert(total == currQuad);
    quad* p = (quad*)malloc(NEW_SIZE);    
    if (quads){
      memcpy(p,quads,CURR_SIZE);
      free(quads);
    }
    quads = p;
    total += EXPAND_SIZE;
}

void emit (enum iopcode op, expr* arg1, expr* arg2, expr* result, unsigned label, unsigned line){
    if (currQuad == total) expand();
    quad *q = quads + currQuad++;
    q->op = op;
    q->arg1 = arg1;
    q->arg2 = arg2;
    q->result = result;
    q->label = label;
    q->line = line;
}

expr* lvalue_expr(SymbolTableEntry* sym){
    assert(sym);
    expr* e = (expr*)malloc(sizeof(expr));
    memset(e,0,sizeof(expr));
    e->next = (expr*)0;
    e->sym = sym; 
    if (sym->type_t == var_s) e->type = var_e;
    else if (sym->type_t == programfunc_s) e->type = programfunc_e;
    else if (sym->type_t == libraryfunc_s) e->type = libraryfunc_e;
    else assert(0);
    return e;
}

expr* member_item (expr* lvalue, char* name){
    lvalue = emit_iftableitem(lvalue, lvalue->sym->line);  
    expr *item = newexpr(tableitem_e);
    item->sym = lvalue->sym;
    item->index = newexpr_conststring(name);
    return item;
}

expr* emit_iftableitem (expr* e, unsigned line){
    if (e->type == tableitem_e) {
        expr* result = newexpr(var_e);
        result->sym = newtemp();
        emit(tablegetelem, e, e->index, result, 0, line);
        return result;
    } else return e;
}

expr* newexpr (enum expr_t type){
    expr* e = (expr*) malloc(sizeof(expr));
    memset(e, 0, sizeof(expr));
    e->type = type;
    return e;
}

expr* newexpr_constnum (double i){
    expr* result = newexpr(constnum_e);
    result->numConst = i;
    return result;
}

expr* newexpr_constbool (unsigned char i){
    expr* result = newexpr(constbool_e);
    result->boolConst = i;
    return result;
}

expr* newexpr_conststring (char* i){
    expr* result = newexpr(conststring_e);
    result->strConst = i;
    return result;
}

expr* make_call (expr* lv, expr* reversed_elist, unsigned line) {
    expr* func = emit_iftableitem(lv, line);
    while (reversed_elist) {
        emit(param, (expr*)0, (expr*)0, reversed_elist, 0, line);
        reversed_elist = reversed_elist->next;
    }
    emit(call, func, (expr*)0, (expr*)0, 0, line);
    expr* result = newexpr(var_e);
    result->sym = newtemp();
    emit(getretval, (expr*)0, (expr*)0, result, 0, line);
    return result;
}

unsigned nextquad(){
    return currQuad; 
}

void patchlabel (unsigned quadNo, unsigned label){
    assert(quadNo < currQuad);
    quads[quadNo].label = label;
}

void print_quads (){
    quad* temp;
    int counter = 0;
    fprintf(stderr, "\n----------------------------------------------------------------------------\n");
    fprintf(stderr, "|                                  QUADS                                   |");
    fprintf(stderr, "\n----------------------------------------------------------------------------\n");
    fprintf(stderr, "%-12s%-12s%-12s", "Quad", "Opcode", "Result");
    fprintf(stderr, "%-12s%-12s%-12s", "Arg1", "Arg2", "Label");
    fprintf(stderr, "%-12s\n", "Line");
    while (counter < currQuad){
        temp = quads + counter;
        
        fprintf(stderr, "%-12d%-12s", counter, operation_to_string[temp->op]);
        if (temp->result)  print_expr_type(temp->result);
        else fprintf(stderr, "%-12s", "");
        if (temp->arg1) print_expr_type(temp->arg1);
        else fprintf(stderr, "%-12s", "");
        if (temp->arg2) print_expr_type(temp->arg2);
        else fprintf(stderr, "%-12s", "");
        fprintf(stderr, "%-12d", temp->label);
        fprintf(stderr, "%-12d\n", temp->line);
        counter++;
    }
}

void print_expr_type (expr* e){
    assert(e);
    if (e->type >=0 && e->type <8) fprintf(stderr, "%-12s", e->sym->name);
    else if (e->type == 8) fprintf(stderr, "%-12.2f", e->numConst);
    else if (e->type == 9) {
        if (!e->boolConst) fprintf(stderr, "%-12s", "false");
        else fprintf(stderr, "%-12s", "true");
    } 
    else if (e->type == 10) fprintf(stderr, "%-12s", e->strConst);
    else if (e->type == 11) return;
}

void compile_time_expression_error(expr* e){
    if (e->type != var_e 
        && e->type != tableitem_e 
        && e->type != arithexpr_e 
        && e->type != assignexpr_e 
        && e->type != constnum_e) fprintf(stderr, "Illegal expr used in arithmetic expression\n");
}

int newlist (int i){ 
    quads[i].label = 0; 
    return i; 
}

int mergelist (int l1, int l2){
    if (!l1) return l2;
    else {
        if (!l2) return l1;
        else {
            int i = l1;
            while (quads[i].label){
                i = quads[i].label;
                quads[i].label = l2;
            }
            return l1;
        }
    }
}

void patchlist (int list, int label){
    int next;
    while (list) {
        next = quads[list].label;
        quads[list].label = label;
        list = next;
    }
}

void make_stmt (stmt_t* s){
    s->breakList = s->contList = 0; 
}

stmt_t* stmt_allocate(){
    stmt_t* result = malloc(sizeof(struct stmt_t));
    make_stmt(result);
}