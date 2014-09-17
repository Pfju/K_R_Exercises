/*******************************************************************/
/****************** https://github.com/Pfju/ ***********************/
/*******************************************************************/
/*Exercise 4-2.*/ 
/*Extend my_atof to handle scientific notation of the form 123.45e-6 where a*/ 
/*floating-point number may be followed by e or E and an optionally*/ 
/*signed exponent.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

double my_atof( char *str );

int ConvertStringToInt( char *str, int begin, int end );

int main ( int argc, char **argv )
{
	double dValue;
	dValue = my_atof ( "123.4678e-3" );
	printf ( "%.4f\n", dValue );

	return 0;
}

double my_atof( char *str )
{
	double frac = 0;
	double res = 0;
	int pot;
	int i = 0, k;
	char *pc1, *pc2, *pc3;
	/*get number till .*/
	pc1 = strchr( str, '.' ); /* set pointer to first occurence of . */
	k = pc1 - str; 
	res = (double) ConvertStringToInt( str, i, k );
	/*get fractional part*/
	pc2 = strchr( str, 'e' );
	i = k+1;
	k = pc2 - str;
	frac = (double) ConvertStringToInt( str, i, k );
	res = res + ( frac / pow(10, pc2-1 - pc1)); /* add fractional part to result */
	/* add 10^pot to result */
	pc3 = strchr( str, '\0' );
	i = k+1;
	k = pc3 - str;
	pot = ConvertStringToInt( str, i, k);
	res *= pow ( 10, pot ); 
	
	return res;
}

int ConvertStringToInt( char *str, int begin, int end )
{
	int sign;
	int iVal = 0;

	if ( '-' == str[begin])
	{
		sign = -1;
		begin++;
	}
	else
		sign = 1;

	while ( begin < end )
	{
		iVal *= 10;
		iVal = iVal + str[begin++] - '0';
	}
	return iVal * sign;
}
