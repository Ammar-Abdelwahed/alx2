#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: multiply two numbers
 * @argc: number of arguments
 * @argv: array of the passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
	}
