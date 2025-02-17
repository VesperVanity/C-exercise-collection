#include <stdio.h>

void blanks_into_single_blank();
//The C Programming Language - Exercise 1-9
//Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
int main(void)
{
	blanks_into_single_blank();
	return 0;
}

void blanks_into_single_blank()
{
	int character = 0;
	int is_blank_space = 0;
	while((character = getchar()) != EOF)
	{
		if(character == ' ')
		{
			if(is_blank_space == 0)
			{
				putchar(character);
				is_blank_space = 1;
			}
		}
		else if(character != ' ')
		{
			is_blank_space = 0;
		}
	}
}