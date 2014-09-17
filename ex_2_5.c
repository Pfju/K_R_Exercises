/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/* Exercise 2-5
 * Write the function any(s1, s2), which returns the first
 * location in a string s1 where any character from the
 * string s2 occurse, or -1 if s1 contains no characters
 * from s2
 */

#include <stdio.h>

int any(char *s1, char *s2);
int p_any(char *s1, char *s2);

int main()
{
	char *str1 = "Hallo";
	char *str2 = "l";

	int ret = any(str1, str2);
	printf("%d\n", ret);
	
	return 0;
}

int any(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i]; i++)
	{
		for (j = 0; s2[j]; j++)
		{
			if (s1[i] == s2[j])
				return i;
		}
	}
	
	return -1;
};

