/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-13:
 * Write a program to print a histogram of the lenghts of words in its
 * input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 */

#include <stdio.h>
#include <conio.h>

#define MAX_SIZE 30
#define ESCAPE 27

/* voBufferInit: initializing elements of array with '0' */
void voBufferInit(int array[], int length);
/* voPrintLength: prints the argument as histogram bar */
void voPrintLength(int input);

int main(int argc, char *argv[])
{
	int i, c, nc = 0, arCount[MAX_SIZE];

	voBufferInit(arCount, MAX_SIZE);

	while((c = getch()) != ESCAPE)
	{
		putchar(c);
		nc++;
		if(c == ' ' || c == '\t' || c == '\n')
		{
			nc--;	/* decrement the counter for last sequence */
			arCount[nc] += 1;	/* add one to buffer with corresponding 
								   length */
			nc = 0;	/* reset character counter */
		}
	}
	/* to catch the last word */
	if(nc > 0)
		arCount[nc] += 1;

	/* creating histogram chart */
	printf("\nHistogram following below");
	printf("\n-------------------------\n");
	for(i = 1; i < MAX_SIZE; i++)
	{
		printf("Word length %2d: ", i);
		voPrintLength(arCount[i]);
	}
	return 0;
}

void voBufferInit(int array[], int length)
{
	int i;

	for(i = 0; i < length; i++)
		array[i] = 0;
}

void voPrintLength(int input)
{
	int i;
	for(i = 0; i < input; i++)
		putchar('x');
	putchar('\n');
}
