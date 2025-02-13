#include <stdio.h>

int main(void)
{
	int number = 0;
	scanf("%d", &number);

	if(number % 2 == 0)
	{
		printf("%s%d\n", "Number is even: ", number);
		//printf("%s", "Even ");
	}
	else if(number % 2 == 1)
	{
		printf("%s%d\n", "Number is odd: ", number);
		//printf("%s", "Odd ");
	}
	return 0;
}