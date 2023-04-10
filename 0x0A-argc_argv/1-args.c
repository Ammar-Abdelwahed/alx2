#include <stdio.h>
/**
 * main - entry point
 * Description: print number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of passed arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
