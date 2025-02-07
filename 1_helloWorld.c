
/*
A C program, what-ever its size, consists of functions and variables.
A function contains state-ments that specify the computing operations to be done, and
variables store values used during the computation.
C functions are like
	the subroutines and functions of Fortran, or ,
	the procedures and functions of Pascal.
*/


#include<stdio.h>	//include information about standard library

int main()		//define a function named main that receives no argument values
/*
"main" is a special function -
	the program begins executing at the beginning of main. 
	This means that every program must have a main some-where.
*/
{					// Statements of main are enclosed in braces "{}".
	printf("hello, world\n");	// main calls library function "print",
					//	to print this sequence of characters.
					// "\n" represents the newline character.
					//	Escape Sequence -
					//		\t - tab , \b - backspace,
					//		\" - double quote, \\ - backslash itself.
    					// A sequence of characters in double quotes, 
					// 	like "hello, world\n ", is called a
					// 	character string or string constant.
	return(0);
}
