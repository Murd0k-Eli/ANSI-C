#include<stdio.h>

/* 1.5.3 Line Counting */

int main()
{
	int c, nc;
	c = 1;
	while ((nc = getchar()) != EOF)
		{
		if (nc == '\n')			// This symbol is used to distinguish the
			{			// equality test from the single = that
						// C uses for assignment.
			++c;
		}
	}
	printf("%d\n",c);
	return (0);
}
