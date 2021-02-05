%%

"false"                         return 7000;
"true"                          return 7001;

"void"                          return 1000;
"int"                           return 1001;
"double"                        return 1002;
"bool"                          return 1003;
"string"                        return 1004;
"class"                         return 1005;
"interface"                     return 1006;
"null"                          return 1007;
"this"                          return 1008;
"extends"                       return 1009;
"implements"                    return 1010;
"for"                           return 1011;
"while"                         return 1012;
"if"                            return 1013;
"else"                          return 1014;
"return"                        return 1015;
"break"                         return 1016;
"continue"                      return 1017;
"new"                           return 1018;
"NewArray"                      return 1019;
"Print"                         return 1020;
"ReadInteger"                   return 1021;
"ReadLine"                      return 1022;
"dtoi"                          return 1023;
"itod"                          return 1024;
"btoi"                          return 1025;
"itob"                          return 1026;
"private"                       return 1027;
"protected"                     return 1028;
"public"                        return 1029;

"+"                             return 2000;
"-"                             return 2001;
"*"                             return 2002;
"/"                             return 2003;
"%"                             return 2004;
"<"                             return 2005;
"<="                            return 2006;
">"                             return 2007;
">="                            return 2008;
"="                             return 2009;
"=="                            return 2010;
"!="                            return 2011;
"||"                            return 2012;
"&&"                            return 2013;
"!"                             return 2014;
";"                             return 2015;
","                             return 2016;
"."                             return 2017;
"["                             return 2018;
"]"                             return 2019;
"("                             return 2020;
")"                             return 2021;
"{"                             return 2022;
"}"                             return 2023;

\/\*(.*?\n*)*?\*\/              return 10000;
\/\/.*                          return 10000;

0[xX][0-9A-Fa-f]+               return 3000;
[0-9]+                          return 3000;

[0-9]+\.([0-9]*([eE][+-]?)?[0-9]*)?         return 4000;

\".*?\"                           return 5000;

[A-Za-z][A-Za-z0-9_]*           return 6000;

[ \n\t\r\xc]+                        return 11000;

.                               return 9000;


%%
int yywrap(void){
    return 1;
}