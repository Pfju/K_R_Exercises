/*******************************************************************/
/***************** https://github.com/Pfju/ ************************/
/*******************************************************************/
/*	Exercise 1-21.
**	Write a program entab that replaces strings of blanks by the minimum number
**	of tabs and blanks to achieve the same spacing. Use the same tab stops as
**	for detab. When either a tab or a single blank would suffice to reach a
**	tab stop, which should be given preference?
*/

// Funktion schreiben die ausgeführt wird beim Finden eines Blanks im Array entab


#include <stdio.h>

#define TAB 3
#define MAX 100

int CountBlanks(char str[], int arpos);
void entab(int);

int main(){

int c, pos, i, blanks;
char array[MAX];
pos = i = 0;

while((c = getchar()) != EOF && c != '\n'){
	array[pos] = c;
	++pos;
}
array[pos] = '\0';

while(array[i] != '\0'){
	if(array[i] == ' '){
		blanks = CountBlanks(array, i);
		entab(blanks);
		i = i + blanks;
	}
	else{
		putchar(array[i]);
		++i;
	}
}
putchar('\n');

return 0;
}

int CountBlanks(char str[], int arpos1)
{
	int cnt = 0;
	
	while(str[arpos1] == ' '){
		++cnt;
		++arpos1;
	}

return cnt;
}

void entab(int blanks)
{
	int tabs, spaces;
	int i;

	tabs = blanks / TAB;	
	spaces = blanks % TAB;
	for(i = 0; i < tabs; ++i)
		putchar('\t');
	for(i = 0; i < spaces; ++i)
		putchar(' ');

}
