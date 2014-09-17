/*******************************************************************/
/***************** https://github.com/Pfju/ ************************/
/*******************************************************************/
//Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after
//the last non-blank character that occurs before the n-th column of input. Make sure your
//program does something intelligent with very long lines, and if there are no blanks or tabs
//before the specified column.

#include <stdio.h>

#define MAX_LENGTH 10

int main(void)
{
	int c, cnt;
	cnt = 0;
	
	while((c = getchar()) != EOF)
	{
		putchar(c);
		++cnt;
		
		if(MAX_LENGTH <= cnt)
		{
			putchar('\n');
			cnt = 0;
		}

	}


return 0;
}

