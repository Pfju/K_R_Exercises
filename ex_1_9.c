/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-9:
 * Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */

#include <stdio.h>

#define BLANK ' '

typedef enum
{
	stBlank,
	stChar
} enState;

int main(int argc, char *argv[])
{
	enState state = stChar;
	int c;
	while((c = getchar()) != EOF)
	{
		if(c != BLANK)	/* check for nonblank, just print it */
		{
			putchar(c);
			state = stChar;
		}
		else if(state == stChar && c == BLANK)	/* print first blank */
		{
			putchar(c);
			state = stBlank;
		}
		else
		{
			/* do nothing */
		}
			
	}
	return 0;
}
