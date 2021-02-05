#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <bits/stdc++.h> 
using namespace std ;
extern FILE *yyin, *yyout;
extern int yyparse();

int main(int argc, char* argv[]){
    if (argc < 5 ){
        cerr<< "Usage: " << argv[0] << " -i <input> -o <output>" << endl ;
        return 1;
    }
    char *output_path = argv[4]; 
    char *input_path = argv[2];
	yyout = fopen(output_path, "w");
    yyin = fopen(input_path, "r");
    yyparse();
    fclose(yyout);
    fclose(yyin);
}