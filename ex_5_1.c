/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/* Exercise 5-1:
 * As written, getint treats a + or - not followed by a digit as a
 * valid representation of zero. Fix it to push such a character back
 * on the input.
 */

#include <stdio.h>
#include <ctype.h>
#include "calc.h"

#define YES 1
#define NO 0
#define SIZE 5

int getch();
void ungetch(int);
int getint(int *pn);

int main(int argc, char *argv[])
{
	int val[SIZE];
	int n;

	for(n = 0; n < SIZE && getint(&val[n]) != EOF; n++)
		;
	for(n = 0; n < SIZE; n++)
		printf("%d\n", val[n]);
	return 0;
}

int getint(int *pn)
{
	int c, sign, validNumber;

	do
	{
		validNumber = YES;
		while(isspace(c = getch()))
			;
		if(!isdigit(c) && c != EOF && c != '+' && c != '-')
		{
			ungetch(c);
			return 0;
		}
		sign = (c == '-') ? -1 : 1;
		if(c == '+' || c == '-')
			c = getch();
		if(!isdigit(c))
		{
			ungetch(c);
			validNumber = NO;
		}
	} while(validNumber == NO);

	for(*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if(c != EOF)
		ungetch(c);
	return c;
}
