#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "calc.h"

int getch(void);
void ungetch(int);

/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;

	s[1] = '\0';
	i = 0;
	if (isalpha(c)) /* collect function from math.h */
		while (isalpha(s[++i] = c = getch()))
			;
	else if (!isdigit(c) && c != '.')
		return c; /* not a number */
	if (isdigit(c)) /* collect integer part */
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.') /* collect fraction part */
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	if (!strcmp(s, "sin"))
		return SIN;
	if (!strcmp(s, "cos"))
		return COS;
	if (!strcmp(s, "tan"))
		return TAN;
	if (!strcmp(s, "pow"))
		return POW;
	if (!strcmp(s, "sqrt"))
		return SQRT;

	return NUMBER;
}
