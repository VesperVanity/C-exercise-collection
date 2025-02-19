#include <stdio.h>

double celsius_to_fahrenheit(double amount_to_convert);
double fahrenheit_to_celsius(double amount_to_convert);

//The C Programming Language - Exercise 1-15
//Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
int main(void)
{
	printf("%s\n", "Type 'c' for celsius or 'f' for fahrenheit as input: ");
	char mode = ' ';
	scanf("%c", &mode);
	if(mode == 'C' || mode == 'c' || mode == 'F' || mode == 'f')
	{
		printf("%s%c%s\n", "Type ", mode, " has been chosen, now enter the amount to convert: ");
	}
	else
	{
		printf("%s\n", "Wrong input, try again");
	}
	double amount_to_convert = 0.0;
	scanf("%lf", &amount_to_convert);
	if(mode == 'C' || mode == 'c')
	{
		printf("%s%lf\n", "Celsius: ", celsius_to_fahrenheit(amount_to_convert));
	}
	else if(mode == 'F' || mode == 'f')
	{
		printf("%s%lf\n", "Fahrenheit: ", fahrenheit_to_celsius(amount_to_convert));
	}
	return 0;
}

double celsius_to_fahrenheit(double amount_to_convert)
{
	double fahrenheit = 0.0;
	fahrenheit = (amount_to_convert * 9/5) + 32;
	double result = fahrenheit;
	return result;
}

double fahrenheit_to_celsius(double amount_to_convert)
{
	double celsius = 0.0;
	celsius = 5 * (amount_to_convert - 32) / 9;
	double result = celsius;
	return result;
}	

