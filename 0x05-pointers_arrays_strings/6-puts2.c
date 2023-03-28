#include "main.h"
/**
 * puts2 - print the first character and skip one character each time
 * @str: the string
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != 0)
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
