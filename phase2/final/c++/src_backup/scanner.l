%{
#include "parser.tab.h"
void yyerror (char *s);
int yylex();
%}
%%

"false"                         return BoolConst;
"true"                          return BoolConst;

"void"                          return Void;
"int"                           return Int;
"double"                        return Double;
"bool"                          return Bool;
"string"                        return String;
"class"                         return Class;
"interface"                     return Interface;
"null"                          return Null;
"this"                          return This;
"extends"                       return Extends;
"implements"                    return Implements;
"for"                           return For;
"while"                         return While;
"if"                            return If;
"else"                          return Else;
"return"                        return Return;
"break"                         return Break;
"continue"                      return Continue;
"new"                           return New;
"NewArray"                      return NewArray;
"Print"                         return Print;
"ReadInteger"                   return ReadInteger;
"ReadLine"                      return ReadLine;
"dtoi"                          return Dtoi;
"itod"                          return Itod;
"btoi"                          return Btoi;
"itob"                          return Itob;
"private"                       return Private;
"protected"                     return Protected;
"public"                        return Public;

"+"                             return Add;
"-"                             return Sub;
"*"                             return Mult;
"/"                             return Div;
"%"                             return Perc;
"<"                             return Lt;
"<="                            return Le;
">"                             return Gt;
">="                            return Ge;
"="                             return Assign;
"=="                            return Eq;
"!="                            return Neq;
"||"                            return Or;
"&&"                            return And;
"!"                             return Not;
";"                             return Semicolon;
","                             return Comma;
"."                             return Dot;
"["                             return Obrac;
"]"                             return Cbrac;
"("                             return Opar;
")"                             return Cpar;
"{"                             return Ocurl;
"}"                             return Ccurl;

\/\*(.*?\n*)*?\*\/              /*ignore*/
\/\/.*                          /*ignore*/

0[xX][0-9A-Fa-f]+               return IntConst;
[0-9]+                          return IntConst;

[0-9]+\.([0-9]*([eE][+-]?)?[0-9]*)?         return DoubleConst;

\".*?\"                           return StringConst;

[A-Za-z][A-Za-z0-9_]*           return Ident;

[ \n\t\r\xc]+                   /*ignore*/

.                               return 9000;


%%
int yywrap(void){
    return 1;
}