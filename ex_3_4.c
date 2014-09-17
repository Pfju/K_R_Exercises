/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 3-4. 
In a two's complement number representation, our version of my_itoa does 
not handle the largest negative number, that is, the value of n equal 
to -(2wordsize-1). Explain why not. Modify it to print that value 
correctly, regardless of the machine on which it runs.*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

void my_my_itoa(int n, char s[]);
void reverse ( char *str );

int main ( int argc, char *argv[] )
{
	int ival = INT_MIN;
	char str1[30];

	my_my_itoa ( ival, str1 );
	printf ( "%s\n", str1 );
	return 0;
}

/* my_itoa: convert n to characters in s */

void my_my_itoa(int n, char s[])
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
	s[i] = '\0';
	reverse(s);
}

void reverse ( char *str )
{
	int i = 0, k = 0;
	char s[100];
	/*copy str to s first*/
	while ( s[i] = str[i] ) i++;
	/*copy s to str in inversed order*/
	while ( str[k++] = s[--i] );
	/*add null terminator at the end*/
	str[k] = '\0';
}
