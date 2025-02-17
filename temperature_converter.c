#include <stdio.h>

void fahrenheit_to_celsius();
void celsius_to_fahrenheit();

//The C Programming Language - Exercise 1-4
//Write a program to print the corresponding Celsius to Fahrenheit table
int main(void)
{	
	fahrenheit_to_celsius();
	celsius_to_fahrenheit();
	return 0;
}

void celsius_to_fahrenheit()
{
	printf("%s", "Enter amount of celsius to convert to fahrenheit: ");
	double celsius = 0.0;
	scanf("%lf", &celsius);
	double fahrenheit = 0.0;
	fahrenheit = (celsius * 9/5) + 32;
	double result = fahrenheit;
	printf("%s%lf\n", "Fahrenheit: " , result);
}

void fahrenheit_to_celsius()
{
	printf("%s", "Enter amount of fahrenheit to convert to celsius: ");
	double fahrenheit = 0.0;
	scanf("%lf", &fahrenheit);
	double celsius = 0.0;
	celsius = 5 * (fahrenheit - 32) / 9;
	double result = celsius;
	printf("%s%lf\n", "Celsius: " , result);
}