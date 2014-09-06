/*
 * https:github.com/Pfju/
 ************************
 * Exercise 1-3:
 * Modify the temperature conversion program to print a heading above
 * the table.
 */

#include <stdio.h>

int main()
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

	fahr = lower;
	while(fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %16.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
