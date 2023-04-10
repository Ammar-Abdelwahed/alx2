#include <stdio.h>
/**
 * main - starting point
 * Description: program that print its name
 * @argc: number of argument
 * @argv: array containing the arguments
 * Return: always 0(success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
