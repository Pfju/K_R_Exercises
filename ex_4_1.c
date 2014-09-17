/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 4-1.*/
/*Write the function strindex(s,t) which returns the position*/
/*of the rightmost occurrence of t in s, or -1 if there is none.*/

#include <stdio.h>
#include <string.h>
#include "myfunctions.h"

int strindex(char s[], char t[]);
void reverse( char *);

int main( int argc, char **argv)
{
	char str1[] = "Das ist ein Test Test";
	char str2[] = "Tes";
	int i = strindex(str1, str2);
	printf ( "%d %s\n %s\n", i, str1, str2);

	return 0;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
	int i, j, k;
	reverse(s);
	reverse(t);
	for (i = 0; s[i] != '\0'; i++) 
	{
		for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++) ;
		if (k > 0 && t[k] == '\0')
		{
			reverse(s);
			reverse(t);
			return i+strlen(t);
		}
	}
	return -1;
}
