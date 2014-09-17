/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 3-3. 
Write a function expand(s1,s2) that expands shorthand
notations like a-z in the string s1 into the equivalent complete list
abc...xyz in s2. Allow for letters of either case and digits, and be
prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a
leading or trailing - is taken literally.*/

#include <stdio.h>
#include <ctype.h>

void expand ( const char *str1, char *str2 );

int main( int argc, char **argv )
{
	char output[100];

	expand( argv[1], output );
	printf("%s\n", output);

	return 0;
}

void expand ( const char *str1, char *str2 )
{	
	char begin, end, c;
	/* remove blanks in the beginning */
	while ( !isdigit(*str1) && !isalpha(*str1) )
		str1++;

	/* get the start */
	begin = *str1++;
	if ( *str1 == '-' )
	{
		/* get the end */
		end = *(++str1);
	}	
	else
	{
		/* no valid input */
		printf("Incorrect Input\n");
	}
	for ( c = begin; c <= end; c++)
	{
		*str2++ = c;
	}
	*str2 = '\0';	
}
