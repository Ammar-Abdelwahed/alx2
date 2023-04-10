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
	char *x;
	int sum = 0;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
		{
			if (*x < '0' || *x > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
