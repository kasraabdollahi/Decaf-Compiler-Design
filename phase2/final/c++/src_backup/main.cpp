#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <bits/stdc++.h> 
using namespace std ;
extern void yyset_in(FILE *fd);
extern void yyset_out(FILE *fd);
extern char* yytext;
extern int yylex();
extern int yyparse();

int main(int argc, char* argv[]){
    if (argc < 5 ){
        cerr<< "Usage: " << argv[0] << " -i <input> -o <output>" << endl ;
        return 1;
    }

    string input_file_name = argv[2];
    string output_file_name = argv[4];

    char input_path[input_file_name.length() + 1];
    strcpy(input_path, input_file_name.c_str());
    FILE *fd_in;
    fd_in = fopen(input_path, "r");
    yyset_in(fd_in);

    char output_path[output_file_name.length() + 1];
    strcpy(output_path, output_file_name.c_str());
    FILE *fd_out;
    fd_out = fopen(output_path, "w");

    yyparse();
    return 0;    
}