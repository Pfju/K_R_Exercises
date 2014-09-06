/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-8:
 * Write a program to count blanks, tabs and newlines.
 */

#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

int main(int argc, char *argv[])
{
	int cntBlanks, cntTabs, cntNewlines;
	cntBlanks = cntTabs = cntNewlines = 0;
	int c;
	while((c = getchar()) != EOF)
	{
		switch(c)
		{
			case BLANK:
				cntBlanks++;
				break;
			case TAB:
				cntTabs++;
				break;
			case NEWLINE:
				cntNewlines++;
				break;
			default:
				break;
		}
		fflush(NULL);
	}
	printf("Blanks: %d\tTabs: %d\t Newlines: %d\n", cntBlanks,
													cntTabs,
													cntNewlines);

	return 0;
}
