/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-18:
 * Write a program to remove trailing blanks and tabs from each line
 * of input, and delete entirely blank lines.
 */

#include <stdio.h>

#define MAXLINE 1000

typedef enum
{
	false,
	true
} bool;

int getline(char line[], int maxline);
bool isBlank(char line[]);

int main(int argc, char *argv[])
{
	int length;
	bool blStatus;
	char line[MAXLINE];

	while((length = getline(line, MAXLINE)) > 0)
	{
		blStatus = isBlank(line);
		if(blStatus == false)
		{

		}
	}
	return 0;
}

int getline(char s[], int lim)
{
	int c, i, j;

	for(j = 0; j < lim-1 && (c = getchar()) != EOF && c != '\n'; j++)
		s[j] = c;
	if(c == '\n')
		s[j++] = c;
	i = j;
	s[++i] = '\0';

	return j;
}

bool isBlank(char line[])
{
	int i = 0;

	while(line[i] != '\0')
	{
		if(line[i] != '\n' && line[i] != ' ' && line[i] != '\t')
			return false;
		i++;
	}
	return true;
}
