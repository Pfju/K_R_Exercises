/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-4:
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temp scale */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	/* print table header */
	printf("Temperature conversion table\n");
	printf("############################\n");
	printf("Fahrenheit | Celsius\n");
	printf("--------------------\n");

	celsius = lower;
	while(celsius <= upper)
	{
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%3.0f %16.0f\n", fahr, celsius);
		celsius = celsius + step;
	}

	return 0;
}
