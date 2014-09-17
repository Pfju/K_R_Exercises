#ifndef CALC_H
#define CALC_H

#define NUMBER '0'
#define SIN '1'
#define COS '2'
#define TAN '3'
#define POW '4'
#define SQRT '5'

/* push number on stack */
void push(double);
/* pop number from stack */
double pop(void);
/* clear stack */
void clear(void);
/* swap the uppest two elements from stack */
void swap(void);
/* gets either a number or an operator from input */
int getop(char []);
/* getchar from buffer */
int getch(void);
/* write char to buffer */
void ungetch(int);

#endif
