#include <stdio.h>

void create_task_string();

//No clue how to set that up just in the command line without any GUI
//So let's just create the general functionality and print it to the console

//So I suppose we need to first be capable of string inputs that will be the task string name
//"Clean your room" for example, print that input string with all other to-do-list tasks
//We can also use a mode in which it's either a bullet list, or, a numbered list
//Plus we need to be capable of deactivating/deleting to-do-list tasks after they're done
//And if you just type enter the current list of tasks should be printed
int main(void)
{
	/*printf("%s\n", "Type B for bullet list style, and N for numbered list style: ");
	char style = ' ';
	scanf("%c", &style);
	if(style == 'b' || style == 'B')
	{

	}
	else if(style == 'n' || style == 'N')
	{

	}
	else
	{
		printf("%s\n", "Wrong input, try again");
	}
	*/
	printf("%s\n", "This is your to-do-list, just enter a task to add it to your task list: ");
	create_task_string();
	return 0;
}

void create_task_string()
{
	int task_character_count = 0;
	char current_character = ' ';
	//Fixed array size is probably a bug and should be dynamic, I do not know how yet
	const int array_max_size = 255;
	char task_string[array_max_size];
	while((current_character = getchar()) != '\n')
	{
		task_string[task_character_count] = current_character;
		++task_character_count;
	}
	char tasks[10][array_max_size];
	tasks[0][1] = task_string[0];
	for(int i = 0; i < array_max_size; ++i)
	{
		tasks[0][i] = task_string[i];
	}
	printf("%d\n", task_character_count);
	printf("%s\n", task_string);
	printf("%s\n", tasks[0]);
}

void print_numbered_task_list()
{

}

void print_bullet_task_list()
{

}