/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*
Exercise 2-3: 
Write a function htoi(s), which converts a string
of hexadecimal digits (including an optional 0x or 0X) into its
equivalent integer value. The allowable digits are 0 through 9,
a through f, and A through F.
*/

#include <stdio.h>
#include <ctype.h>

#define MAX 100

int htoi(char* s);

int main()
{
	int c, i = 0;
	char buffer[MAX];

	while((c = getchar()) != '\n' && c != EOF)
	{
		if(c != ' ')
			buffer[i++] = c;
	}
	buffer[i] = '\0';

	printf("%s\n", buffer);

	printf("%d\n", htoi(buffer));
	return 0;
}

int htoi(char* s)
{
	int res, val;
	res = val = 0;

	if(*s == '0' && *(s+1) == 'x'
			|| *s == '0' && *(s+1) == 'X')
		s = s + 2;
		
	for( ;*s != '\0'; s++)
	{
		*s = toupper(*s);
		if( isdigit(*s) )
			val = *s - '0';
			else if(*s >= 'A' && *s <= 'F')
				val = *s - 'A' + 10;
	res = res * 16 + val;
	}
	
return res;
}
