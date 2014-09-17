#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"
#define MAXOP 100
#define PI 3.1415

int main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case SIN:
				push(sin(pop()*PI/180.0));
				break;
			case COS:
				push(cos(pop()*PI/180.0));
				break;
			case TAN:
				push(tan(pop()*PI/180.0));
				break;
			case POW:
				push(pow(pop(),pop()));
				break;
			case SQRT:
				push(sqrt(pop()));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				swap();
				push(pop() - pop());
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				push((int)pop() % (int)op2);
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}
