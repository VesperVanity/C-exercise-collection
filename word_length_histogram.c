#include <stdio.h>

void print_word_length_histogram();

//The C Programming Language - Exercise 1-13
//Write a program to print a histogram of the lengths of words in its input
int main(void)
{
	print_word_length_histogram();
	return 0;
}

void print_word_length_histogram()
{
	int word_count = 0;
	int character = 0;
	int word_character_count = 0;
	while((character = getchar()) != EOF)
	{
		if(character != '\t' && character != '\b' && character != ' ' && character != '\n')
		{
			++word_character_count;
		}
		if(character == '\n')
		{
			++word_count;
		}
		for(int i = 0; i < word_character_count; ++i)
		{
			printf("%c%c", '*', ' ');
		}
		word_character_count = 0;
	}
}