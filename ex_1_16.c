/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-16:
 * Revise the main routine of the longest-line program so it will
 * correctly print the length of arbitrary long input lines, and as
 * much as possible of the text.
 */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getline(line, MAXLINE)) > 0)
	{
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0)
		printf("%d: %s\n", max, longest);

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
void copy(char to[], char from[])
{
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}
