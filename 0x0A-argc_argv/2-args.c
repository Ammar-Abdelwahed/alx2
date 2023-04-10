#include <stdio.h>
/**
 * main - entry point
 * Description: print all the passed arguments
 * @argc: number of arguments
 * @argv: array of the passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
