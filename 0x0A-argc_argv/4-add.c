#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: add integer arguments
 * @argc: number of passed arguments
 * @argv: array of the passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%i\n", sum);
	return (0);
}
