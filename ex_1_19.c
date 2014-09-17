/*******************************************************************/
/***************** https://github.com/Pfju/ ************************/
/*******************************************************************/
/*
**	ex_1_19
**	Write a function reverse(s) that reverses the character
**	string s. Use it to write a program that reverses its
**	input a line at a time.
*/
#include <stdio.h>

#define MAX 100

void reverse(char str[], char stro[], int size);

int main(){

char input[MAX];
char output[MAX];
int c, i;
i = 0;

while((c = getchar()) != EOF && c != '\n'){
	input[i] = c;	
	++i;
}
input[i] = '\0';
reverse(input, output, i);
printf("%s\n", output);

return 0;
}

void reverse(char str[], char stro[], int size){
	
	int j, k;
	k = 0; j = size-1;

	for(k; k < size; ++k){
		stro[j] = str[k];
		--j;
	}
	stro[size] = '\0';
}
