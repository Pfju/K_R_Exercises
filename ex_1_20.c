/*******************************************************************/
/***************** https://github.com/Pfju/ ************************/
/*******************************************************************/
/*	ex_1_20
**	Write a program detab that replaces tabs in the input with
**	the proper number of blanks to space to the next tab stop.
**	Assume a fixed set of tab stops, say every n columns.
**	Should n be a variable or a symbolic parameter?
*/
#include <stdio.h>

#define SPACE 10
#define MAX 1000

int tab(int curVal, int space){

return space - curVal;
};

int main(){

int c, nc, iv, i, step;
char str[MAX];
nc = iv = 0;

while((c = getchar()) != EOF && c != '\n')
{
	if(c == '\t'){
		step = tab(iv,SPACE);
		for(i = 0; i <= step; ++i){
			str[nc] = ' ';
			++nc;
		}
	}
	else{
		str[nc] = c;
		++nc;
		++iv;
	}
	if(iv == SPACE)
		iv = 0;
}
str[nc] = '\0';
printf("%s\n",str);
return 0;
}
