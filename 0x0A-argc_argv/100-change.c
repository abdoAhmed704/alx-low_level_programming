#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints coins change
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of commmand line arguments.
 * Return: 0-success
 */

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
	int i, least = 0, my_money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for(i = 0; i < 5; i++)
	{
		if(my_money >=cents[i])
		{
			 least += my_money / cents[i];
			 my_money = my_money % cents[i];
			 if (my_money % cents[i] == 0)
			 {
				break;
			}
		 }
	}
	printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return(1);
	}
	return (0);
}
