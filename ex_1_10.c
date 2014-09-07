/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-10:
 * Write a program to copy its input to its output, replacing each tab
 * by \t, each backspace by \\. This makes tabs and backspaces visible
 * in an unambigous way.
 * Note:
 * To leave the program use the ESC key
 */

#include <stdio.h>
#include <conio.h>

#define TAB '\t'
#define BACKSPACE 8	/* see ascii table */
#define ESCAPE 27

int main(int argc, char *argv[])
{
	int c;

	while((c = getch()) != ESCAPE)
	{
		if(c == TAB)
		{
			putch('\\');
			putch('t');
		}
		else if(c == BACKSPACE)
		{
			putch('\\');
			putch('\\');
		}
		else
			putch(c);
	}	

	return 0;
}
