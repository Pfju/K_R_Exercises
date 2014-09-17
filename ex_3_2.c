/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 3-2. */
/*Write a function escape(s,t) that converts characters like*/
/*newline and tab into visible escape sequences like \n and \t as it copies */
/*the string t to s. Use a switch. Write a function for the other direction */
/*as well, converting escape sequences into the real characters.*/

#include <stdio.h>

void escape(char *s, const char *t);
void escape2(char *s, const char *t);


int main()
{
	char str1[100];
	char str2[] = "Hallo	klappt das?\nVielleicht?";
	char str3[] = "Test\\n\\tzwei";
	escape(str1, str2);
	printf("Str2: \n%s\n", str2);
	printf("Str1: \n%s\n", str1);
	printf("Str3: \n%s\n", str3);
	escape2(str1, str3);
	printf("Str1: \n%s", str1);
	return 0;
}

void escape(char *s, const char *t)
{
	while ( *s = *t )
	{
		switch ( *s )
		{
		case '\n':
		{
			*s++ = '\\';
			*s = 'n';
			break;
		}
		case '\t':
		{
			*s++ = '\\';
			*s = 't';
			break;
		}
		default:
			break;
		}
	s++; t++;
	}
}

void escape2(char *s, const char *t)
{
	while ( *s = *t )
	{
		if ( *t == '\\' )
		{
			switch ( *(t+1) )
			{
				case 'n':
					*s = '\n';
					t++;
					break;
				case 't':
					*s = '\t';
					t++;
					break;
				default:
					break;
			}
		}
		s++; t++;
	}
}
