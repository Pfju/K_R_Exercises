/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*
Exercise 2-4. 
Write an alternative version of squeeze(s1,s2)
that deletes each character in s1 that matches any character
in the string s2.
*/
#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 100

enum state
{
	def,
	found
};

void squeeze(char *, char *);

int main()
{
	char test1[MAXSIZE] = "Hallo Welt";
	char test2[] = "al";

	squeeze(test1, test2);

	printf("%s", test1);
	return 0;
}

void squeeze(char *s1, char *s2)
{
	int i, j, k = 0;
	char res[MAXSIZE];
	enum state status = def;
	
	for( i=0; s1[i] != '\0'; i++ )
	{
		status = def;
		for( j=0; s2[j] != '\0'; j++ )
		{
			if( s1[i] == s2[j] )
			{
				status = found;
				break;
			}
		}
		if( status == def )
		{
			res[k++] = s1[i];
		}
		res[k] = '\0';
	}
	i = 0;
	while( s1[i++] = res[i] );
}
