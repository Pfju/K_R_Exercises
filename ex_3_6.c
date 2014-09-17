/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 3-6.*/
/*Write a version of itoa that accepts three arguments instead of two.*/
/*The third argument is a minimum field width; the converted number must*/ 
/*be padded with blanks on the left if necessary to make it wide enough.*/

#include <stdio.h>
#include <stdlib.h>
#include "myfunctions.h"

void my_itoa(int n, char s[], const int width);

int main( int argc, char *argv[] )
{
	int ival = 25;
	char str[100];

	my_itoa( ival, str, 50);
	printf ( "%s\n", str);

	return 0;
}

/* my_itoa: convert n to characters in s */
void my_itoa(int n, char s[], const int width)
{
	int i, sign;
	sign = n;

	i = 0;
	do 
	{ /* generate digits in reverse order */
		s[i++] = abs( n % 10 )+ '0'; /* get next digit */
	} while ( n /= 10 ); /* delete it */
	if (sign < 0)
		s[i++] = '-';
	/*padding with blanks if necessary*/
	for ( ; i <= width; i++)
		s[i] = ' ';
	s[i] = '\0';
	reverse(s);
}
