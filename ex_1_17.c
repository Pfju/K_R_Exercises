/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-17:
 * Write a program to print all input lines that are longer than 80
 * characters.
 */

#include <stdio.h>

#define MAXLINE 1000
#define THRESHOLD 80

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
	int length;
	char line[MAXLINE];

	while((length = getline(line, MAXLINE)) > 0)
	{
		if(length > THRESHOLD)
		{
			printf("%s\n", line);
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
void copy(char to[], char from[])
{
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}
