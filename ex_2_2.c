/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*
Exercise 2-2. 
Write a loop equivalent to the for loop above without using && or ||.
*/

#include <stdio.h>

#define MAX 100

int main()
{
    char s[MAX];
    int i = 0;
    int c;

    while (i < MAX-1)
    {
	 c = getchar();
	 if(c == EOF)
	    break;
	 if(c == '\n')
	    break;
	 s[i++] = c;
    }
    s[i] = '\0';

    i = 0;
    while(s[i] != '\0')
    {
	 putchar(s[i++]);
    }

    return 0;
}
