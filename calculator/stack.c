#include <stdio.h>
#include "calc.h"
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}
/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else 
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* clear stack */
void clear(void)
{
	sp = 0;
}

/* swap the uppest two elements from stack */
void swap(void)
{
	double temp;
	temp = val[sp-1];
	val[sp-1] = val[sp-2];
	val[sp-2] = temp;
}
