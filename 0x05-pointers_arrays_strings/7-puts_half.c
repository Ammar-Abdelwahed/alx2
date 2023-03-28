#include "main.h"
/**
 * puts_half - print half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int k;

	while (str[i] != 0)
	{
		i++;
	}

	if (i % 2 != 0)
	{
		k = (i + 1) / 2;
	}
	else
	{
		 k = i / 2;
	}

	for (j = k; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
