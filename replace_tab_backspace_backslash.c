#include <stdio.h>

void replace_tab_backspace_backslash();

//The C Programming Language - Exercise 1-10
//Write a program to copy its input to its output, replacing each tab by \t
//Each backspace by \b, and each backslash by \\
//This makes tabs and backspaces visible in an unambiguous way
int main(void)
{
	replace_tab_backspace_backslash();
	return 0;
}

void replace_tab_backspace_backslash()
{
	int character = 0;
	int is_tab = 0;
	int is_backspace = 0;
	int is_backslash = 0;
	while((character = getchar()) != EOF)
	{
		if(character == '\t')
		{
			if(is_tab == 0)
			{
				putchar('\\');
				putchar('t');
				is_tab = 1;
			}
		}
		else if(character == '\b')
		{
			if(is_backspace == 0)
			{
				putchar('\\');
				putchar('b');
				is_backspace = 1;
			}
		}
		else if(character == '\\')
		{
			if(is_backslash == 0)
			{
				putchar('\\');
				putchar('\\');
				is_backslash = 1;
			}
		}

		if(character != '\t')
		{
			is_tab = 0;
		}
		if(character != '\b')
		{
			is_backspace = 0;
		}
		if(character != '\\')
		{
			is_backslash = 0;
		}
	}
}