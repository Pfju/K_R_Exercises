/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-5:
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 to 0.
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

	for(celsius = upper; celsius >= lower; celsius -= step)
	{
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%3.0f %16.0f\n", fahr, celsius);
	}

	return 0;
}
