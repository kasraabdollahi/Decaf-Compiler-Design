%{
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
extern char* yytext;
extern int yylex();
extern int yyparse();
extern int yylineno;
void yyerror (char *s);
int yylex();
%}
%union {char id;}
%start Program
%token Void
%token Int
%token Double
%token Bool
%token String
%token Class
%token Interface
%token Null
%token This
%token Extends
%token Implements
%token For
%token While
%token If
%token Else
%token Return
%token Break
%token Continue
%token New
%token NewArray
%token Print
%token ReadInteger
%token ReadLine
%token Dtoi
%token Itod
%token Btoi
%token Itob
%token Private
%token Protected
%token Public
%token Add
%token Sub
%token Mult
%token Div
%token Perc
%token Lt
%token Le
%token Gt
%token Ge
%token Assign
%token Eq
%token Neq
%token Or
%token And
%token Not
%token Semicolon
%token Comma
%token Dot
%token Obrac
%token Cbrac
%token Opar
%token Cpar
%token Ocurl
%token Ccurl
%token IntConst
%token DoubleConst
%token StringConst
%token BoolConst
%token Ident
%token Usub

%left Usub
%left Sub Add Or And
%left Mult Div Perc
%right Lt Le Gt Ge Eq Neq Assign
%left Not 
%left Dot
%left Opar Obrac Ocurl

%type <id> AccessMode Actuals BreakStmt Call ClassDecl ClassDeclFirst ClassDeclSecond Constant
%type <id> ContinueStmt Decl DeclPlus Expr ExprPlus Field FieldStar ForStmt Formals
%type <id> FunctionDecl IfStmt IfStmtFirst InterfaceDecl LValue NewArray Print PrintStmt Program
%type <id> Prototype PrototypeStar ReadInteger ReadLine ReturnStmt Stmt StmtBlock StmtPlus
%type <id> Type Variable VariableDecl VariableDeclPlus VariablePlus WhileStmt
%%
Program: 
    DeclPlus    {printf("OK\n");}
;

Decl: 
    VariableDecl | 
    FunctionDecl | 
    ClassDecl | 
    InterfaceDecl
;

DeclPlus:
    Decl | 
    DeclPlus Decl
;

VariableDecl: 
    Variable Semicolon
;

VariableDeclPlus:
    VariableDeclPlus VariableDecl | VariableDecl
;

Variable: 
    Type Ident
;

VariablePlus:
    Variable |
    VariablePlus Variable
;

Type: 
    Int | 
    Double | 
    Bool | 
    String | 
    Ident | 
    Type Obrac Cbrac
;

FunctionDecl: 
    Type Ident Opar Formals Cpar StmtBlock | 
    Void Ident Opar Formals Cpar StmtBlock
;

Formals: 
    VariablePlus Comma | 
;

ClassDeclFirst:
    Extends Ident | 
;

IdentPlus:
    Ident |
    IdentPlus Ident
;

ClassDeclSecond:
    Implements IdentPlus | 
;

ClassDecl:
    Class Ident ClassDeclFirst ClassDeclSecond Ocurl FieldStar Ccurl
;

Field:
    AccessMode VariableDecl |
    AccessMode FunctionDecl
;

FieldStar:
    FieldStar Field | 
;

AccessMode:
    Private |
    Protected |
    Public | 
;

InterfaceDecl:
    Interface Ident Ocurl PrototypeStar Ccurl
;

Prototype:
    Type Ident Opar Formals Cpar Semicolon |
    Void Ident Opar Formals Cpar Semicolon
;

PrototypeStar:
    PrototypeStar Prototype | 
;

StmtBlock:
    Ocurl VariableDeclPlus StmtPlus Ccurl |
    Ocurl StmtPlus Ccurl |
    Ocurl VariableDeclPlus Ccurl |
    Ocurl Ccurl 
;

Stmt: 
    Expr Semicolon |
    Semicolon |
    IfStmt |
    WhileStmt |
    ForStmt |
    BreakStmt |
    ContinueStmt |
    PrintStmt |
    ReturnStmt |
    StmtBlock
;

StmtPlus:
    StmtPlus Stmt | Stmt
;

IfStmtFirst:
    Else Stmt | 
;

IfStmt:
    If Opar Expr Cpar Stmt IfStmtFirst
;

WhileStmt:
    While Opar Expr Cpar Stmt
;

ForStmt:
    For Opar Expr Semicolon Expr Semicolon Expr Cpar Stmt | 
    For Opar Semicolon Expr Semicolon Expr Cpar Stmt | 
    For Opar Expr Semicolon Expr Semicolon Cpar Stmt | 
    For Opar Semicolon Expr Semicolon Cpar Stmt
;

ReturnStmt:
    Return Expr Semicolon
;

BreakStmt:
    Break Semicolon
;

ContinueStmt:
    Continue Semicolon
;

PrintStmt:
    Print Opar ExprPlus Comma Cpar Semicolon
;

Expr:
    LValue Assign Expr |
    Constant | 
    LValue |
    This |
    Call |
    Opar Expr Cpar |
    Expr Add Expr |
    Expr Sub Expr |
    Expr Mult Expr |
    Expr Div Expr |
    Expr Perc Expr |
    Sub Expr | %prec Usub
    Expr Lt Expr |
    Expr Le Expr |
    Expr Gt Expr |
    Expr Ge Expr |
    Expr Eq Expr |
    Expr Neq Expr |
    Expr And Expr |
    Expr Or Expr |
    Not Expr |
    ReadInteger Opar Cpar |
    ReadLine Opar Cpar |
    New Ident |
    NewArray Opar Expr Comma Type Cpar |
    Itod Opar Expr Cpar |
    Dtoi Opar Expr Cpar |
    Itob Opar Expr Cpar |
    Btoi Opar Expr Cpar
;

ExprPlus:
    Expr |
    ExprPlus Expr
;

LValue:
    Ident |
    Expr Dot Ident |
    Expr Obrac Expr Cbrac
;

Call:
    Ident Opar Actuals Cpar |
    Expr Dot Ident Opar Actuals Cpar
;

Actuals:
    ExprPlus Comma | 
;

Constant:
    IntConst |
    DoubleConst |
    BoolConst |
    StringConst |
    Null
;


%%                     /* C code */
void yyerror (char *s) {
    printf("Syntax Error");
    return;
} 