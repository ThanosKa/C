#include "symtable.h"

static const char *operation_to_string[] = {
	"assign", "add", "sub", "mul", "div", "mod", "uminus",        
    "and", "or", "not", "if_eq", "if_neq", "if_lesseq", "if_greatereq",  
    "if_less", "if_greater", "call", "param", "ret", "getretval",     
    "funcstart", "funcend", "tablecreate", "tableget", "tableset", "jump"
};

enum iopcode{
    assign, add, sub, mul, divide, mod, uminus,        
    and, or, not, if_eq, if_neq, if_lesseq, if_greatereq,  
    if_less, if_greater, call, param, ret, getretval,     
    funcstart, funcend, tablecreate, tablegetelem, tablesetelem, jump
};

enum expr_t{
    var_e, tableitem_e, programfunc_e, libraryfunc_e,
    arithexpr_e, boolexpr_e, assignexpr_e, newtable_e,
    constnum_e, constbool_e, conststring_e, nil_e
};

typedef struct expr{
    enum expr_t type;
    SymbolTableEntry* sym;
    struct expr* index;
    double numConst;
    char* strConst;
    unsigned char boolConst;
    struct expr* next;
} expr;

typedef struct quad{
    enum iopcode op;
    expr* result;
    expr* arg1;
    expr* arg2;
    unsigned label;
    unsigned line;
} quad;

typedef struct stmt_t {
    int breakList, contList;
} stmt_t;

typedef struct call_c {
    expr* elist;
    unsigned char method;
    char* name;
} call_c;

typedef struct for_s{
    unsigned test;
    unsigned enter;
} for_s;


void expand();
void emit (enum iopcode op, expr* arg1, expr* arg2, expr* result, unsigned label, unsigned line);
expr* lvalue_expr (SymbolTableEntry* sym);
expr* member_item (expr* lvalue, char* name);
expr* emit_iftableitem (expr* e, unsigned line);
expr* newexpr (enum expr_t type);
expr* newexpr_constnum (double i);
expr* newexpr_constbool (unsigned char i);
expr* newexpr_conststring (char* i);
expr* make_call (expr* lv, expr* reversed_elist, unsigned line);
void print_quads ();
void print_expr_type (expr* e);
void compile_time_expression_error(expr* e);
void patchlabel (unsigned quadNo, unsigned label);
unsigned nextquad ();
int newlist (int i);
int mergelist (int l1, int l2);
void patchlist (int list, int label);
void make_stmt (stmt_t* s);
stmt_t* stmt_allocate();