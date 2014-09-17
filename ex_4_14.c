/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/* Exercise 4-14:
 * Define a macro swap(t, x, y) that interchanges two arguments of
 * type t.
 */

#include <stdio.h>

#define swap(t, x, y)	\
{ 						\
	t temp = x;			\
	x = y;				\
	y = temp;			\
}

int main(int argc, char *argv[])
{
	int a = 10;
	int b = 25;
	printf("a: %d, b: %d\n", a, b);
	swap(int, a, b);
	printf("a: %d, b: %d\n", a, b);
	return 0;
}
