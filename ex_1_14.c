/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-14:
 * Write a program to print a histogram of the frequencies of
 * different characters in its input.
 * Note:
 * only counting A/a-Z/z
 */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define ESCAPE 27
#define ALPH_NUMB 26

void voBufferInit(int array[], int length);
void voPrintCount(int input);

int main(int argc, char *argv[])
{
	int arAlph[ALPH_NUMB];
	int c, i;

	voBufferInit(arAlph, ALPH_NUMB);

	while((c = getch()) != ESCAPE)
	{
		putchar(c);
		c = tolower(c);
		arAlph[c-'a'] += 1;
	}
	printf("\nHistogram below\n---------------\n");
	for(i = 0; i < ALPH_NUMB; i++)
	{
		printf("%c/%c: ", i+'A', i+'a');
		voPrintCount(arAlph[i]);
	}

	return 0;
}

void voBufferInit(int array[], int length)
{
	int i;

	for(i = 0; i < length; i++)
		array[i] = 0;
}

void voPrintCount(int input)
{
	int i;
	for(i = 0; i < input; i++)
		putchar('x');
	putchar('\n');
}
