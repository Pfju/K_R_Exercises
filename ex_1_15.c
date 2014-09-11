/*
 * https://github.com/Pfju/
 ************************
 * Exercise 1-15:
 * Rewrite the temperature conversion program of section 1.2 to use a
 * function for conversion.
 */

#include <stdio.h>

double convertToFahrenheit(double celsius);
double convertToCelsius(double fahrenheit);

int main(int argc, char *argv[])
{
	printf("%.2f\n", convertToCelsius(50.0));
	printf("%.2f\n", convertToFahrenheit(10.0));
	return 0;
}

double convertToFahrenheit(double celsius)
{
	return celsius * 9.0 / 5.0 + 32.0;
}
double convertToCelsius(double fahrenheit)
{
	return 5.0 * (fahrenheit - 32.0) / 9.0;
}
