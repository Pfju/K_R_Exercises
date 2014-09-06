/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-6:
 * Verify that the expression getchar() != EOF is 0 or 1.
 *
 * Note:
 * Press <ctrl-c> for EOF
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;

	c = getchar() != EOF;
	printf("%d = getchar() != EOF\n", c);

	return 0;
}
