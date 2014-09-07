/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-12:
 * Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define OUT 0
#define IN 1

int main(int argc, char *argv[])
{
	int c, state;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		if((state == IN) && (c == '\n' || c == '\t' || c == ' '))
		{
			state = OUT;
			putchar('\n');
		}
		else if((state == OUT) && (c == '\n' || c == '\t' || c == ' '))
			;	// do nothing
		else
		{
			state = IN;
			putchar(c);
		}
	}
   	return 0;
}
