#include <stdio.h>

int main(void)
{
	int numbers[10] = {25, 25, 50, 50, 25, 25, 50, 50, 25, 25};
	int numbers_length = 10;
	int sum = 0;
	for(int i = 0; i < numbers_length; ++i)
	{
		int current_number = numbers[i];
		sum += current_number;
		printf("%s%d\n", "Current sum: ", sum);
	}
	printf("%s%d\n", "Resulting sum of all values: ", sum);
	return 0;
}