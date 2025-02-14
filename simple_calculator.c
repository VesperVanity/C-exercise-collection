#include <stdio.h>

void calculator();

int main(void)
{
	calculator();
	return 0;
}

void calculator()
{
	printf("%s%s%s%s%s\n", "Choose the modifier to use for calculations: ", " + ", " - ", " * ", " / ");
	char modifier = ' ';
	scanf("%c", &modifier);
	printf("%s%c\n", "Your chosen modifier is: ", modifier);
	printf("%s\n", "Now enter two numbers that you want to use with the modifier: ");
	double first_number = 0.0;
	double second_number = 0.0;
	scanf("%lf%lf", &first_number, &second_number);
	double result = 0.0;
	if(modifier == '+')
	{
		result = first_number + second_number;
	}
	else if(modifier == '-')
	{
		result = first_number - second_number;
	}
	else if(modifier == '*')
	{
		result = first_number * second_number;
	}
	else if(modifier == '/')
	{
		result = first_number / second_number;
	}
	else
	{
		printf("%s\n", "Wrong input, try again.");
		return;
	}
	printf("%s%lf\n", "Your end-result is: ", result);
}