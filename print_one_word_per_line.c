#include <stdio.h>

void print_one_word_per_line();

//The C Programming Language - Exercise 1-12
//Write a program that prints its input one word per line
int main(void)
{	
	print_one_word_per_line();
	return 0;
}

void print_one_word_per_line()
{
	printf("%s\n", "Write a normal sentence, whatever comes to mind.");
	int character = 0;
	while((character = getchar()) != EOF)
	{
		if(character == ' ' || character == '\t' || character == '\n')
		{
			putchar('\n');
		}
		else
		{
			putchar(character);
		}
	}
}