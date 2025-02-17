#include <stdio.h>

void count_blanks_tabs_newlines();

//The C Programming Language - Exercise 1-8
//Write a program to count blanks, tabs and newlines.
int main(void)
{
	count_blanks_tabs_newlines();
	return 0;
}

void count_blanks_tabs_newlines()
{
	int character = 0;
	int blank_count = 0;
	int tab_count = 0;
	int newline_count = 0;
	while((character = getchar()) != EOF)
	{
		if(character == ' ')
		{
			++blank_count;
			printf("%s%d\n", "Blank count: ", blank_count);
		}
		else if(character == '\t')
		{
			++tab_count;
			printf("%s%d\n", "Tab count: ", tab_count);
		}
		else if(character == '\n')
		{
			++newline_count;
			printf("%s%d\n", "Newline count: ", newline_count);
		}
	}
}
