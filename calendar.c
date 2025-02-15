#include <stdio.h>

void check_year();
void print_month_name();
void print_weekdays();
void print_month();

int main(void)
{
	printf("%s\n", "Enter the year that you want to display as a calendar, between 1800 and 2100: ");
	check_year();
	int month_max = 12;
	for(int i = 0; i < month_max; ++i)
	{
		print_month_name();
		print_weekdays();
		print_month();	
	}
	return 0;
}

//Goal: Print out one full year calendar in the terminal
//12 months, starting at January, to December
//Simple calendar format, Sun Mon Tue Wed Thu Fri Sat or so
//Year will be chosen by the user, so it must make sense dynamically
//No idea how a calendar is calculated
//Either way we have to start somewhere, so let's start at 1800 and go to 2100 or so
//The first of January in the year 1800 was Wednesday
//The main issue is definitely February with it's extra day because of leap years
//How was that, you skip leap years each 100 years?
//Unless it's divisible by 400?


//Loop from first day to last day of month
//Each month is printed separate, so dislocate the logic accordingly
//We will just go ahead and try and see what works, since I don't really have a clue

void check_year()
{
	//Check if input year is valid
	//Check for leap years
}

void calculate_print_offset()
{
	
}

void print_month()
{
	int month_number = 0;
	int print_offset = 0;
	switch(month_number)
	{
	case 1:
		print_offset = 3;
		break;
	case 2:
		print_offset = 6;
		break;
	case 3:
		print_offset = 6;
		break;
	case 4:
		print_offset = 2;
		break;
	case 5:
		print_offset = 4;
		break;
	case 6:
		print_offset = 0;
		break;
	case 7:
		print_offset = 2;
		break;
	case 8:
		print_offset = 5;
		break;
	case 9:
		print_offset = 1;
		break;
	case 10:
		print_offset = 3;
		break;
	case 11:
		print_offset = 6;
		break;
	case 12:
		print_offset = 1;
		break;
	}
}

void print_weekdays()
{
	printf("%s%s%s%s%s%s%s\n", "Su", "Mo", "Tu", "We", "Th", "Fr", "Sa");
}

void print_month_name()
{
	//Don't know how to use/create strings, hence we just use ints for now
	int month_max = 12;
	for(int i = 0; i < month_max, ++i)
	{
		printf("%d", i);
	}
}

