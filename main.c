#include <stdio.h>
#include <stdarg.h>




void calculate(const int argc, char** argv){

	int i;
	int value;
	// Expects argc/2-1 operators and argc/2+1 values

	// decide the calculation order, first * and /, then + and -

	for(i = 1; i < argc; i++){
	
	}
}

		


int main(const int argc, char** argv){

	int i;

	for(i = 1; i < argc; i++){

	printf("Argument %d is %s\n", i, argv[i]);
	}


	calculate(argc,argv);

	return 0;
}
