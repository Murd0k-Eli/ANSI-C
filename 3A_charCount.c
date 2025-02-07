#include<stdio.h>

/* 1.5.2 Character Counting */

int main()
{
	long nc;
	nc = 0;
	while ((getchar()) != EOF)
		{
		++nc;				//Increment by 1 (Prefix and Postfix;
						//Increment before and After Expression evaluation}
	}
	printf("%ld\n",nc);
	printf("EOF");
	return (0);
}
