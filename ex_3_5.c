/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 3-5.*/
/*Write the function itob(n,s,b) that converts the integer n*/ 
/*into a base b character representation in the string s. In particular,*/ 
/*itob(n,s,16)formats s as a hexadecimal integer in s.*/

#include <stdio.h>

void itob ( int n, char *s, int b );
void reverse ( char *str );

int main ( int argc, char *argv[] )
{
	int ival = 25;
	int base = 8;
	char str[100];
	itob ( ival, str, base );
	printf ( "%s\n", str);
	reverse ( str );
	printf ( "%s\n", str);
	return 0;
}

void itob ( int n, char *s, int b )
{
	static const char *num = "0123456789ABCDEF";
	do
	{
		*s++ = *num+(n % b);
	} while (n /= b);	
	*s = '\0';
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
