%{
    #include "quad.h"   
    int yylex(void);
    void yyerror(char* yaccProvidedMessage); 

    void check_term ();
    expr* arithmetic_expr(expr* t, expr* t1, int t2, expr* t3);
    expr* compare_expr(expr* t, expr* t1, int t2, expr* t3);
    expr* bool_expr(expr* t, expr* t1, int t2, expr* t3);

    extern int yylineno;
    extern char* yytext;
    extern FILE* yyin;

    unsigned int scope = 0;
    unsigned int dollars_counter = 0;
    unsigned int state = 0;
    unsigned int loopcounter = 0;
    unsigned int is_member = 0;
    SymbolTableEntry* sym_temp;
%}

%start program

%union { 
    unsigned unsVal;
    int intVal; 
    double realVal; 
    char* strVal;
    struct expr* exprVal;
    struct SymbolTableEntry* symbVal;
    struct call_c* callVal;
    struct stmt_t* stmtVal;
    struct for_s*  forVal;
}

%type <exprVal> lvalue member primary assignexpr call term 
%type <exprVal> objectdef const expr elist indexed indexedelem
%type <symbVal> funcdef funcprefix
%type <callVal> callsuffix normcall methodcall
%type <unsVal>  ifprefix ifstmt elseprefix whilecond whilestart whilestmt N M funcbody
%type <stmtVal> stmt stmtp block loopstmt
%type <forVal>  forprefix 
%type <strVal>  funcname

%token <intVal>  INTEGER
%token <realVal> REAL
%token <strVal>  ID
%token <strVal>  STRING

%token MULTI_COMMENT
%token MULTI_COMMENT_NEVER_CLOSED
%token NESTED_INSIDE_MULTI_COMMENT
%token STRING_NEVER_CLOSED
%token WARNING_STRING

%token <intVal> ASSIGNMENT
%token <intVal> ADD
%token <intVal> SUB
%token <intVal> SHARP
%token <intVal> SLASH
%token <intVal> PERCENT
%token <intVal> EQUAL
%token <intVal> NOT_EQUAL
%token <intVal> PLUS_PLUS
%token <intVal> MINUS_MINUS
%token <intVal> LESS
%token <intVal> GREATER
%token <intVal> GREATER_OR_EQUAL
%token <intVal> LESS_OR_EQUAL
%token <intVal> AND
%token <intVal> OR

%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET
%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token LEFT_PARENTHESES
%token RIGHT_PARENTHESES
%token SEMICOLON
%token COMMA
%token COLON
%token DOUBLE_COLON
%token DOT
%token DOUBLE_DOT
%token IF
%token ELSE
%token WHILE
%token FOR
%token FUNCTION
%token RETURN
%token <stmtVal> BREAK
%token <stmtVal> CONTINUE
%token NOT 
%token LOCAL_KEYWORD
%token TRUE
%token FALSE
%token NIL
%token LINE_COMMENT

%right ASSIGNMENT
%left AND OR
%nonassoc EQUAL NOT_EQUAL
%nonassoc GREATER GREATER_OR_EQUAL LESS LESS_OR_EQUAL
%left ADD SUB
%left SHARP SLASH PERCENT
%right NOT PLUS_PLUS MINUS_MINUS UMINUS
%left DOT DOUBLE_DOT
%left LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
%left LEFT_PARENTHESES RIGHT_PARENTHESES

%%

program:  
    stmtp {fprintf(stderr, "program -> stmtp\n");}
    |;

stmtp:
    stmt {
        $$ = $1;
        reset_temp_var_scope();
        fprintf(stderr, "stmtp -> stmt\n");
    }
    |stmtp stmt {
        $$ = malloc(sizeof(struct stmt_t));
        
        if ($1 && $2){
            if ($1->breakList && $2->breakList){
                $$->breakList = mergelist($1->breakList, $2->breakList);
            } else if ($1->breakList && !$2->breakList){
                $$->breakList = $2->breakList;
            } else if (!$1->breakList && $2->breakList){
                $$->breakList = $1->breakList;
            } else {
                make_stmt($$);
            }
        }
        
        if ($1 && $2){
            if ($1->contList && $2->contList){
                $$->contList = mergelist($1->contList, $2->contList);
            } else if ($1->contList && !$2->contList){
                $$->contList = $2->contList;
            } else if (!$1->breakList && $2->breakList){
                $$->contList = $1->contList;
            } else {
                make_stmt($$);
            }
        }
        reset_temp_var_scope();
        fprintf(stderr, "stmtp -> stmtp stmt\n");
    }
    |error {yyerror("syntax error");};

stmt:   
    expr SEMICOLON          {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> expr;\n");
    }
    |ifstmt                 {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> ifstmt\n");
    }
    |whilestmt              {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> whilestmt\n");
    }
    |forstmt                {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> forstmt\n");
    }
    |returnstmt             {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> returnstmt\n");
    }
    |BREAK SEMICOLON        {
        if (!state) yyerror("Break statement not in a function");
        else {
            $1 = malloc(sizeof(struct stmt_t));
            make_stmt($1);
            $1->breakList = newlist(nextquad());
            $$ = NULL;
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        fprintf(stderr, "statement -> break;\n");
    }
    |CONTINUE SEMICOLON     {
        if (!state) yyerror("Continue statement not in a function");
        else {
            $1 = malloc(sizeof(struct stmt_t));
            make_stmt($1);
            $1->contList = newlist(nextquad());
            $$ = $1;
            emit(jump, NULL, NULL, NULL,0, yylineno);
        }
        fprintf(stderr, "statement -> continue;\n");
    }
    |block                  {
        $$ = $1;
        fprintf(stderr, "statement -> block;\n");
    }
    |funcdef                {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> funcdef;\n");
    }
    |warning                {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> warning;\n");
    }
    |string_comment_error   {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> string_comment_error;\n");
    }
    |comment                {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> comment;\n");
    }
    |SEMICOLON              {
        $$ = stmt_allocate();
        fprintf(stderr, "statement -> ;\n");
    }

expr:
    assignexpr {
        $$ = $1;
        fprintf(stderr, "expression -> assignexpr;\n");
    }
    |expr ADD expr {
        $$ = arithmetic_expr($$, $1, add, $3);
        fprintf(stderr, "expr + expr\n");
    }
    |expr SUB expr {
        $$ = arithmetic_expr($$, $1, sub, $3);
        fprintf(stderr, "expr - expr\n");
    }
    |expr SHARP expr {
        $$ = arithmetic_expr($$, $1, mul, $3);
        fprintf(stderr, "expr * expr\n");
    }
    |expr PERCENT expr {
        $$ = arithmetic_expr($$, $1, mod, $3);
        fprintf(stderr, "expr %% expr\n");
    }
    |expr SLASH expr {
        $$ = arithmetic_expr($$, $1, divide, $3);
        fprintf(stderr, "expr // expr\n");
    }
    |expr GREATER expr {
        $$ = compare_expr($$, $1, if_greater, $3);
        fprintf(stderr, "expr > expr\n");
    }
    |expr GREATER_OR_EQUAL expr {
        $$ = compare_expr($$, $1, if_greatereq, $3);
        fprintf(stderr, "expr >= expr\n");
    }
    |expr LESS expr {
        $$ = compare_expr($$, $1, if_less, $3);
        fprintf(stderr, "expr < expr\n");
    }
    |expr LESS_OR_EQUAL expr {
        $$ = compare_expr($$, $1, if_lesseq, $3);
        fprintf(stderr, "expr <= expr\n");
    }
    |expr EQUAL expr {
        $$ = compare_expr($$, $1, if_eq, $3);
        fprintf(stderr, "expr == expr\n");
    }
    |expr NOT_EQUAL expr {
        $$ = compare_expr($$, $1, if_neq, $3);
        fprintf(stderr, "expr != expr\n");
    }
    |expr AND expr {
        $$ = bool_expr($$, $1, and, $3);
        fprintf(stderr, "expr && expr\n");
    }
    |expr OR expr {
        $$ = bool_expr($$, $1, or, $3);
        fprintf(stderr, "expr || expr\n");
    };
    |term {
        $$ = $1;
        fprintf(stderr, "expression -> term;\n");
    };

term:
    LEFT_PARENTHESES expr RIGHT_PARENTHESES {
        $$ = $2;
        fprintf(stderr, "term -> (expr)\n");
    }
    |SUB expr %prec UMINUS                  {
        compile_time_expression_error($2);
        $$ = newexpr(arithexpr_e);
        $$->sym = newtemp();
        emit(uminus, $2, NULL ,$$, 0, yylineno);
        fprintf(stderr, "term -> -expr\n");
    }
    |NOT expr                               {
        /* Τotal Expression Assessment */
        $$ = newexpr(boolexpr_e);
        $$->sym = newtemp();
        emit(uminus, $2, NULL ,$$, 0, yylineno);
        fprintf(stderr, "term -> not expr\n");
    }
    |PLUS_PLUS lvalue                       {
        check_term();
        compile_time_expression_error($2);
        if ($2->type == tableitem_e){
            $$ = emit_iftableitem($2, yylineno);
            emit(add, $$, newexpr_constnum(1), $$, 0, yylineno);
            emit(tablesetelem, $2, $2->index, $$, 0, yylineno);
        } else {
            emit(add, $2, newexpr_constnum(1), $2, 0, yylineno);
            $$ = newexpr(arithexpr_e);
            $$->sym = newtemp();
            emit(assign, NULL, $2, $$, 0, yylineno);      
        }
        fprintf(stderr, "term -> ++lvalue\n");
    }
    |lvalue PLUS_PLUS                       {
        check_term();
        compile_time_expression_error($1);
        $$ = newexpr(arithexpr_e);
        $$->sym = newtemp();
        if ($1->type == tableitem_e){
            expr* val = emit_iftableitem($1, yylineno);
            emit(assign, NULL, val, $$, 0, yylineno);
            emit(add, val, newexpr_constnum(1), val, 0, yylineno);
            emit(tablesetelem, $1, $1->index, val, 0, yylineno);
        } else {
            emit(assign, NULL, $1, $$, 0, yylineno);
            emit(add, $1, newexpr_constnum(1), $1, 0, yylineno);
        }
        fprintf(stderr, "term -> lvalue++\n");
    }
    |MINUS_MINUS lvalue                     {
        check_term();
        compile_time_expression_error($2);
        if ($2->type == tableitem_e){
            $$ = emit_iftableitem($2, yylineno);
            emit(sub, $$, newexpr_constnum(1), $$, 0, yylineno);
            emit(tablesetelem, $2, $2->index, $$, 0, yylineno);
        } else {
            emit(sub, $2, newexpr_constnum(1), $2, 0, yylineno);
            $$ = newexpr(arithexpr_e);
            $$->sym = newtemp();
            emit(assign, $2, NULL, $$, 0, yylineno);      
        }
        fprintf(stderr, "term -> --lvalue\n");
    }
    |lvalue MINUS_MINUS                     {
        check_term();
        compile_time_expression_error($1);
        $$ = newexpr(arithexpr_e);
        $$->sym = newtemp();
        if ($1->type == tableitem_e){
            expr* val = emit_iftableitem($1, yylineno);
            emit(assign, NULL, val, $$, 0, yylineno);
            emit(sub, val, newexpr_constnum(1), val, 0, yylineno);
            emit(tablesetelem, $1, $1->index, val, 0, yylineno);
        } else {
            emit(assign, NULL, $1, $$, 0, yylineno);
            emit(sub, $1, newexpr_constnum(1), $1, 0, yylineno);
        }
        fprintf(stderr, "term -> lvalue--\n");
    }
    |primary {
        $$ = $1;
        fprintf(stderr, "term -> primary\n");
    };

assignexpr:
    lvalue ASSIGNMENT expr {
        if ($1->type == tableitem_e){
            emit(tablesetelem, $3, $1->index, $1, 0, yylineno);
            $$ = emit_iftableitem($1, yylineno);
            $$->type = assignexpr_e;
        } else{
            emit(assign, $3, NULL, $1, 0, yylineno);
            $$ = newexpr(assignexpr_e);
            $$->sym = newtemp();
            emit(assign, $1, NULL, $$, 0, yylineno);
        }
        fprintf(stderr, "assignexpr -> lvalue = expr\n");
    };

primary:
    lvalue                                      {
        $$ = emit_iftableitem($1, yylineno);
        fprintf(stderr, "primary -> lvalue\n");
    }
    |call  {fprintf(stderr, "primary -> call\n");}
    |objectdef {
        $$ = $1;
        fprintf(stderr, "primary -> objectdef\n");
    }
    |LEFT_PARENTHESES funcdef RIGHT_PARENTHESES {
        $$ = newexpr(programfunc_e);
        $$->sym = $2;
        fprintf(stderr, "primary -> (funcdef)\n");
    }
    |const {
        $$ = $1; 
        fprintf(stderr, "primary -> const\n");
    };

lvalue:
    ID  {
        int temp = scope;
        int accessibility_flag = 1;
        while (temp > 0){
            if(lookup_last_type(temp) == 1){
                fprintf(stderr, "\nERROR -> cannot access function %s in line %d\n\n", $1, yylineno);
                accessibility_flag = 0;
            } else {
                sym_temp = lookup_by_specific_scope_and_return($1, temp);
                accessibility_flag = 0;
            }
            temp--;
        }
        if (lookup_by_specific_scope ($1, 0)){
            sym_temp = lookup_by_specific_scope_and_return($1, 0);
            accessibility_flag = 0;
        }
        if (!accessibility_flag){
            if (!scope){
                sym_temp = insert_and_space_offset($1, scope, yylineno, GLOBAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            }
        } else {
            sym_temp = insert_and_space_offset($1, scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
            inccurrscopeoffset();
        }
      
      	$$ = lvalue_expr(sym_temp);
        is_member = 0;
        fprintf(stderr, "lvalue -> ID\n");
    }
    |LOCAL_KEYWORD ID {
        if (!check_library_collisions($2)){
            if (!lookup_by_specific_scope($2, 0)){
                if (!scope){
                    sym_temp = insert_and_space_offset($2, scope, yylineno, GLOBAL, currscopespace(), currscopeoffset());
                    inccurrscopeoffset();
                } else {
                    sym_temp = insert_and_space_offset($2, scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
                    inccurrscopeoffset();
                }
            } else sym_temp = lookup_by_specific_scope_and_return($2, scope);
        } else {
            fprintf(stderr, "\nERROR -> collision  with LIBFUNC in line %d\n\n", yylineno);         
        }
        $$ = lvalue_expr(sym_temp);
        is_member = 0;
        fprintf(stderr, "lvalue -> LOCAL_KEYWORD ID\n");
    }
    |DOUBLE_COLON ID {  
        if (!lookup_by_specific_scope($2, 0)){
            fprintf(stderr, "\nERROR -> undeclared variable or function %s in line %d\n\n", $2, yylineno);
        } else {
            sym_temp = lookup_by_specific_scope_and_return($2, scope);
            $$ = lvalue_expr(sym_temp);
        }
        is_member = 0;
        fprintf(stderr, "lvalue -> DOUBLE_COLON ID\n");
    }
    |member {
        is_member = 1;
        fprintf(stderr, "lvalue -> member\n");
    };

member:
    lvalue DOT ID {
        $$ = member_item($1,yylval.strVal);
        fprintf(stderr, "member -> lvalue.id\n");
    }
    |lvalue LEFT_SQUARE_BRACKET expr RIGHT_SQUARE_BRACKET   {
        $1 = emit_iftableitem($1, yylineno);
        $$ = newexpr(tableitem_e);
        $$->sym = $1->sym;
        $$->index = $3;
        fprintf(stderr, "member -> lvalue[expr]\n");
    }
    |call DOT ID                                            {fprintf(stderr, "member -> call.id\n");}
    |call LEFT_SQUARE_BRACKET expr RIGHT_SQUARE_BRACKET     {fprintf(stderr, "member -> call[expr]\n");};

call:
    call LEFT_PARENTHESES elist RIGHT_PARENTHESES {
        $$ = make_call($1, $3, yylineno);
        fprintf(stderr, "call -> call[elist]\n");
    }
    |lvalue callsuffix {
        $1 = emit_iftableitem($1, yylineno);
        if ($2->method){
            $1 = emit_iftableitem(member_item($1, $2->name), yylineno);
            $1->next = $2->elist;
            $2->elist = $1;
        }
        $$ = make_call($1, $2->elist, yylineno);
        fprintf(stderr, "call -> lvalue callsuffix\n");
    }
    |LEFT_PARENTHESES funcdef RIGHT_PARENTHESES LEFT_PARENTHESES elist RIGHT_PARENTHESES {
        expr* func = newexpr(programfunc_e);
        func->sym = $2;
        $$ = make_call(func, $5, yylineno);
        fprintf(stderr, "call -> (funcdef) (elist)\n");
    };

callsuffix:
    normcall    {
        $$ = $1;
        fprintf(stderr, "callsuffix -> normcall\n");
    }
    |methodcall {
        $$ = $1;
        fprintf(stderr, "callsuffix -> methodcall\n");
    };

normcall:
    LEFT_PARENTHESES elist RIGHT_PARENTHESES {
        $$ = malloc(sizeof(struct call_c));
        $$->elist = $2;
        $$->method = 0;
        $$->name = NULL;
        fprintf(stderr, "normcall -> (elist)\n");
    }
    |ID LEFT_PARENTHESES expr RIGHT_PARENTHESES {fprintf(stderr, "methodcall -> id(elist)\n");}
    |ID LEFT_PARENTHESES elist COMMA expr RIGHT_PARENTHESES {fprintf(stderr, "methodcall -> id(elist)\n");}
    |ID LEFT_PARENTHESES RIGHT_PARENTHESES {fprintf(stderr, "methodcall -> id()\n");};

methodcall:
    DOUBLE_DOT ID LEFT_PARENTHESES elist RIGHT_PARENTHESES {
        $$ = malloc(sizeof(struct call_c));
        $$->elist = $4;
        $$->method = 1;
        $$->name = $2;
        fprintf(stderr, "methodcall -> ..id(elist)\n");
    };

elist: 
    expr {
        $1->next= NULL;
        $$ = $1;
        fprintf(stderr, "elist -> expr\n");
    }
    |elist COMMA expr {
        expr* temp = $1;
        while(temp->next) temp = temp->next;
        temp->next = $3;
        $$ = $1;
        fprintf(stderr, "elist -> elist, expr\n");
    }  
    |{};

objectdef: 
    LEFT_SQUARE_BRACKET elist RIGHT_SQUARE_BRACKET     {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        expr* temp = $2;
        int i = 0;
        while (temp){
            emit(tablesetelem, newexpr_constnum(i++), temp, t, 0, yylineno);
            temp = temp->next;
        }
        $$ = t;
        fprintf(stderr, "objectdef -> [elist]\n");
    }
    |LEFT_SQUARE_BRACKET indexed RIGHT_SQUARE_BRACKET   {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        expr* temp = $2;
        int i = 0;
        while (temp){
            emit(tablesetelem, temp->index, temp, t, 0, yylineno);
            temp = temp->next;
        }
        $$ = t;
        fprintf(stderr, "objectdef -> [indexed]\n");
    };

indexed:
    indexedelem                 {
        $1->next = NULL;
        $$ = $1;
        fprintf(stderr, "indexed -> indexedelem\n");
    }
    |indexed COMMA indexedelem  {
        $3->next = $1;
        $$ = $3;
        fprintf(stderr, "indexed -> indexed, indexedelem\n");
    };

indexedelem:
    LEFT_CURLY_BRACKET expr COLON expr RIGHT_CURLY_BRACKET {
        $2->index = $4;
        $$ = $2;
        fprintf(stderr, "indexedelem -> {expr:expr}\n");
    };

block:
    LEFT_CURLY_BRACKET{
        scope++;
        enable(scope);
        state++;
    } RIGHT_CURLY_BRACKET{
        hide(scope);
        scope--;
        state--;
        fprintf(stderr, "block -> {}\n");
    };
    |LEFT_CURLY_BRACKET{
        scope++;
        enable(scope);
        state++;
    } stmtp RIGHT_CURLY_BRACKET{
        $$ = $3;
        hide(scope);
        scope--;
        state--;
        fprintf(stderr, "block -> {stmt*}\n");
    };

funcname:
    ID { 
        $$ = yylval.strVal; 
        fprintf(stderr, "funcname -> ID\n");
    }
    |  {
        char* a = malloc(sizeof(char*));
        char* b = malloc(sizeof(char*));
        strcat(b,strdup("$"));
        sprintf(a,"%d",dollars_counter);
        dollars_counter++;
        $$ = strcat(b,a);
        fprintf(stderr, "funcname -> \n");
    };

funcprefix: 
    FUNCTION funcname{  
        if (check_library_collisions($2) && !scope) fprintf(stderr, "\nERROR -> Collision with library function: at line %d\n\n", yylineno);
        else {
            if (!lookup_by_specific_scope($2, scope)) {
                $$ = insert_and_return($2, scope, yylineno, USERFUNC);
                $$->iaddress = nextquad();
                emit(funcstart, NULL, NULL, lvalue_expr($$), 0, yylineno);
                push(currscopeoffset());
                enterscopespace();
                resetformalargsoffset();
            }
            else {
                int user = lookup_by_specific_type_and_scope($2, USERFUNC, scope);
                int global = lookup_by_specific_type_and_scope($2, GLOBAL, scope);
                int local = lookup_by_specific_type_and_scope($2, LOCAL, scope);
                int formal = lookup_by_specific_type_and_scope($2, FORMAL, scope);

                if (user != -1) fprintf(stderr, "\nERROR in line %d -> Function %s already declared: at line %d\n\n", yylineno, $2, user);
                else if (global != -1) fprintf(stderr, "\nERROR in line %d -> Global variable %s already declared: at line %d\n\n", yylineno, $2, global); 
                else if (local != -1 ) fprintf(stderr, "\nERROR in line %d -> Local variable %s already declared: at line %d\n\n", yylineno, $2, local); 
                else if (formal != -1 ) fprintf(stderr, "\nERROR in line %d -> Formal variable %s already declared: at line %d\n\n", yylineno, $2, formal);   
            }
        }
        fprintf(stderr, "funcprefix -> FUNCTION funcname\n");
    };

funcargs:
    LEFT_PARENTHESES  {++scope;} idlist RIGHT_PARENTHESES{
        enterscopespace();
        resetfunctionlocalsoffset();
        scope--;
        fprintf(stderr, "funcargs -> (idlist)\n");
    };

funcbody:
    block {
        $$ = currscopeoffset();
        exitscopespace();
        fprintf(stderr, "funcbody -> block\n");
    };

funcdef: 
    funcprefix funcargs funcbody {
        exitscopespace();
        $1->totalLocals = $3;
        restorecurrscopeoffset(pop_and_top());
        $$ = $1;
        emit(funcend, NULL, NULL, lvalue_expr($1), 0, yylineno);
        fprintf(stderr, "funcdef -> funcprefix funcargs funcbody\n");
    };

const:
    INTEGER {
        $$ = newexpr_constnum(yylval.intVal);
        fprintf(stderr, "const -> INTEGER\n");
    }
    |REAL   {
        $$ = newexpr_constnum(yylval.realVal);
        fprintf(stderr, "const -> REAL\n");
    }
    |STRING {
        $$ = newexpr_conststring(yylval.strVal);
        fprintf(stderr, "const -> STRING\n");
    }
    |NIL    {fprintf(stderr, "const -> NIL\n");}
    |TRUE   {
        $$ = newexpr_constbool(1);
        fprintf(stderr, "const -> TRUE\n");
    }
    |FALSE  {
        $$ = newexpr_constbool(0);
        fprintf(stderr, "const -> FALSE\n");
    };

idlist:
    ID {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        else {
            sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
            inccurrscopeoffset();
        } 
        fprintf(stderr, "idlist -> ID\n");
    } idlist_case_commaid
    |;

idlist_case_commaid:
    idlist_case_commaid COMMA ID {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        else {
            if (!lookup_last(yylval.strVal, scope)) {
                sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            } else {
                fprintf(stderr, "\nERROR -> Formal Variable %s already defined: at line %d\n\n", yylval.strVal, yylineno); 
            }    
        }
        fprintf(stderr, "idlist -> idlist,ID\n");
    }
    |;

ifprefix:
    IF LEFT_PARENTHESES expr RIGHT_PARENTHESES {
        emit(if_eq, $3, newexpr_constbool(1), NULL, nextquad()+2, yylineno);
        $$ = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
        fprintf(stderr, "ifprefix -> IF LEFT_PARENTHESES expr RIGHT_PARENTHESES\n");
    }

elseprefix:
    ELSE {
        $$ = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
    };

ifstmt:     
    ifprefix stmt { 
        patchlabel($1, nextquad());
        fprintf(stderr, "ifstmt -> if (expr) stmt\n");
    };
    |ifprefix stmt elseprefix stmt {
        patchlabel($1, $3+1);	
        patchlabel($3, nextquad());
        fprintf(stderr, "ifstmt -> if (expr) stmt ELSE stmt\n");
    };

whilestart:
    WHILE {$$ = nextquad();}

whilecond:
    LEFT_PARENTHESES expr RIGHT_PARENTHESES{
        emit(if_eq, $2, newexpr_constbool(1), NULL, nextquad()+2, yylineno);
        $$ = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
    }

whilestmt:  
    whilestart whilecond stmt {
        emit(jump, NULL, NULL, NULL, $1, yylineno);
        patchlabel($2, nextquad());
        patchlist($3->breakList, nextquad());
        patchlist($3->contList, nextquad());
        fprintf(stderr, "whilestmt -> WHILE(expr) { stmt } \n");
    };

N:
    {
        $$ = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
    }

M:
    {
        $$ = nextquad();
    }

forprefix:
    FOR LEFT_PARENTHESES elist SEMICOLON M expr SEMICOLON {
      //  $$ = malloc(sizeof(struct for_s));
        $$->test = $5;
        $$->enter = nextquad();
        emit(if_eq, $6, newexpr_constbool(1), NULL, 0, yylineno);
    };

loopstart:
    {++loopcounter;};

loopend:
    {--loopcounter;};

loopstmt:
    loopstart stmt loopend {
        $$ = $2;
        fprintf(stderr, "loopstmt -> loopstart stmt loopend\n");
    }

forstmt:    
    forprefix N elist RIGHT_PARENTHESES N loopstmt N {
        patchlabel($1->enter, $5+1);
        patchlabel($2, nextquad());
        patchlabel($5, $1->test);
        patchlabel($7, $2+1);
        patchlist($6->breakList, nextquad());
        patchlist($6->contList, $2+1);
        fprintf(stderr, "forstmt -> for(elist; expr; elist) stmt\n");
    };

returnstmt: 
    RETURN expr SEMICOLON   {
        if (!state) yyerror("Return statement not in a function");
        else emit(ret, NULL, NULL, $2, 0, yylineno);
        fprintf(stderr, "returnstmt -> RETURN expr SEMICOLON\n");
    }
    |RETURN SEMICOLON       {
        if (!state) yyerror("Return statement not in a function");
        else emit(ret, NULL, NULL, NULL, 0, yylineno);
        fprintf(stderr, "returnstmt -> RETURN SEMICOLON\n");
    };	

comment:    
    LINE_COMMENT                    {fprintf(stderr, "comment -> Single line comment\n");}
    |MULTI_COMMENT                  {fprintf(stderr, "comment -> Multiline comment\n");}
    |NESTED_INSIDE_MULTI_COMMENT    {fprintf(stderr, "comment -> Multiline comment with nested comments\n");};

warning:
    WARNING_STRING                  {fprintf(stderr, "warning -> WARNING_STRING\n");};

string_comment_error:
    MULTI_COMMENT_NEVER_CLOSED      {fprintf(stderr, "string_comment_error -> MULTI_COMMENT_NEVER_CLOSED\n");}
    |STRING_NEVER_CLOSED            {fprintf(stderr, "string_comment_error -> STRING_NEVER_CLOSED\n");}

%%

expr* arithmetic_expr(expr* t, expr* t1, int t2, expr* t3){
    compile_time_expression_error(t1);
    compile_time_expression_error(t3);
    if (t1->type == constnum_e && t3->type == constnum_e){
        int result;
        if (t2 == 1) result = t1->numConst + t3->numConst;
        else if (t2 == 2) result = t1->numConst - t3->numConst;
        else if (t2 == 3) result = t1->numConst * t3->numConst;
        else if (t2 == 4) result = t1->numConst / t3->numConst;
        else if (t2 == 5) result = (int)t1->numConst % (int)t3->numConst;
        t = newexpr_constnum(result);
    } else {
        t = newexpr(arithexpr_e);
        t->sym = newtemp();
    }
    emit(t2, t1, t3, t, 0, yylineno);
    return t;
}

expr* compare_expr(expr* t, expr* t1, int t2, expr* t3){
    /* Τotal Expression Assessment */
    t = newexpr(boolexpr_e);
    t->sym = newtemp();
    emit(t2, t1, t3, t,  nextquad()+3, yylineno);
    emit(assign, NULL, newexpr_constbool(0), t, 0, yylineno);
    emit(jump, NULL, NULL, NULL, nextquad()+2 ,yylineno);
    emit(assign, NULL, newexpr_constbool(1), t, 0, yylineno);
    return t;
}

expr* bool_expr(expr* t, expr* t1, int t2, expr* t3){
    /* Τotal Expression Assessment */
    t = newexpr(boolexpr_e);
    t->sym = newtemp();
    emit(t2, t1, t3, t, 0, yylineno);
    return t;
}

void check_term () {
    if (!is_member){
        if (lookup_by_specific_type(yylval.strVal, USERFUNC)) fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        if (lookup_by_specific_type(yylval.strVal, LIBFUNC)) fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
     } else {
        if (lookup_by_specific_type(yytext, USERFUNC)) fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
        if (lookup_by_specific_type(yytext, LIBFUNC)) fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
     }
}

void yyerror (char* yaccProvidedMessage){
	fprintf(stderr, "\nERROR -> %s: at line %d, before token %s\n\n", yaccProvidedMessage, yylineno, yytext);
}

int main(int argc, char** argv){
    if (argc > 1){
        if (!(yyin=fopen(argv[1],"r") )){
            fprintf(stderr,"Cannot read file: %s\n",argv[1]);
            return 1;
        }
    } else yyin=stdin;

    initialize_libraries();
    yyparse();  
    print_by_scopes();
    print_quads();

    return 0;   
}