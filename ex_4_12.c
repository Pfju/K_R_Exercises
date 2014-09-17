/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/* Exercise 4-12:
 * Adapt the ideas of printd to write a recursive version of itoa;
 * that is, convert an integer into a string by calling a recursive
 * routine */

#include <stdio.h>

void my_itoa(char *str, int n)
{
	static int i = 0;
	static int indexEnd = 1;
	if(n / 10)
	{
		indexEnd++;
		my_itoa(str, n / 10);
	}
	str[i++] = n % 10 + '0';
	str[indexEnd] = '\0';
};

int main ( int argc, char **argv )
{
	int val = 2514;
	char array[50];

	my_itoa(array, val);
	printf("%s\n", array);

	return 0;
}

