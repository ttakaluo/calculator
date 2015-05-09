#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>




void calculate(const int argc, char** argv){


	//Really bad algoritm following...

	

	int i;
	// Expects argc/2-1 operators and argc/2+1 values

	// decide the calculation order, first * and /, then + and -

	for(i = 1; i < argc; i++){
	
	}
}

void seperate(char* list){
	//the seperate function splits numbers and operators in list and analyses calculation order

	//read number/operator
	
	int i=1;
	char c[10] = {};

	for(i = 0; list[i] != '\0'; i++){
		
	
		if(isdigit(list[i])){
			printf("Found a number\n");
			strcat(c,&list[i]);		
		}
		if(list[i] == '*' || list[i] == '/' || list[i] == '+' || list[i] == '-'){
			printf("Found an operator.\n");	
		}
		printf("%s\n", c);
	}
}
		


int main(const int argc, char** argv){

	int i;
	char argument_line[100] = {};
	for(i = 1; i < argc; i++){

		printf("Argument %d is %s\n", i, argv[i]);
		strcat(argument_line, argv[i]);
	}
	//printf("The combined argument_line is %s\n", argument_line);


	seperate(argument_line);

	return 0;
}
