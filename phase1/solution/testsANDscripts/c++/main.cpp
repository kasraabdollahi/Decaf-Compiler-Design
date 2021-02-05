#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <bits/stdc++.h> 
using namespace std ;

extern int yylex();
extern int yylineno;
extern char *yytext;
extern void yyset_in(FILE *fd);

int main(int argc, char* argv[]){
    if (argc < 5 ){
        cerr<< "Usage: " << argv[0] << " -i <input> -o <output>" << endl ;
        return 1;
    }

    string input_file_name = argv[2];
    string output_file_name = argv[4];
    input_file_name = "tests/" + input_file_name;
    char input_path[input_file_name.length() + 1];
    strcpy(input_path, input_file_name.c_str());

    ofstream output_file("out/" + output_file_name) ;
    // ifstream input_file("tests/" + input_file_name);
    // cout << input_file_name << endl;
    cout << input_path << endl;
    FILE *fd;
    fd = fopen(input_path, "r");
    if(!fd){
        cerr << "Couldn't open intended file";
        return 1;
    }
    yyset_in(fd);
    int a = yylex();
    while(a){
        if(a < 10000){
            if(a >= 7000 && a < 8000){
                output_file << "T_BOOLEANLITERAL ";
            }
            else if(a >= 3000 && a < 4000){
                output_file << "T_INTLITERAL ";
            }
            else if(a >= 4000 && a < 5000){
                output_file << "T_DOUBLELITERAL ";
            }
            else if(a >= 5000 && a < 6000){
                output_file << "T_STRINGLITERAL ";
            }
            else if(a >= 6000 && a < 7000){
                output_file << "T_ID ";
            }
            else if(a >= 9000 && a < 10000){
                output_file << "UNDEFINED_TOKEN";
            }

            if(!(a >= 9000 && a < 10000)){
                output_file << yytext << endl;
            }
        }
        a = yylex();
    }
    fclose(fd);
    return 0;
}