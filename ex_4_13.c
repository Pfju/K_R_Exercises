/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/* Exercise 4-13:
 * Write a recursive version of the function reverse(s), which
 * reverses the string s in place.
 */

#include <stdio.h>
#include <string.h>

void reverse(char *str, int begin, int end)
{
	char temp;
	if(begin >= end)
		return;
	temp = str[begin];
	str[begin] = str[end];
	str[end] = temp;
	reverse(str, ++begin, --end);
};

int main(int argc, char *argv[])
{
	char testArray[] = "Testobjekt";
	char testArray2[] = "Ein weiterer Test";
	reverse(testArray, 0, strlen(testArray)-1);
	reverse(testArray2, 0, strlen(testArray2)-1);
	printf("%s\n", testArray);
	printf("%s\n", testArray2);
	return 0;
}
