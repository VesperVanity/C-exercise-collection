#include <stdio.h>

int main(void)
{
	printf("%s\n", "Enter the year that you want to display as a calendar: ");
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

void print_month()
{
	print_weekdays();

}

void print_weekdays()
{
	printf("%s%s%s%s%s%s%s\n", "Su", "Mo", "Tu", "We", "Th", "Fr", "Sa");
}



