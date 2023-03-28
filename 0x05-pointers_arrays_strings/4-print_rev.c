#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	/* getting the index of the last element of the string*/
	while (s[i] != 0)
	{
		i++;
	}
	/* decreasing the value by because of the null value*/
	i--;
	/* print the string in reverse*/
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
