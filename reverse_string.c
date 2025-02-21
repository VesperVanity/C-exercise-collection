#include <stdio.h>

void print_reverse_string(char string[], int string_length);

//The C Programming Language - Exercise 1-19
//Write a function reverse(s) that reverses the character string s
//Use it to write a program that reverses its input a line at a time
int main(void)
{
	char current_character = ' ';
	const int MAX_LINE_AMOUNT = 1000;
	char current_string[MAX_LINE_AMOUNT];
	int current_character_counter = 0;
	while((current_character = getchar()) != '\n')
	{
		current_string[current_character_counter] = current_character;
		++current_character_counter;
	}
	current_string[current_character_counter] = '\0';
	print_reverse_string(current_string, current_character_counter);
	return 0;
}

void print_reverse_string(char string[], int string_length)
{
	const int MAX_LINE_AMOUNT = 1000;
	char reversed_string[MAX_LINE_AMOUNT];
	for(int i = 0; i < string_length; ++i)
	{
		reversed_string[i] = string[string_length - 1 - i];
	}
	printf("%s\n", reversed_string);
}

