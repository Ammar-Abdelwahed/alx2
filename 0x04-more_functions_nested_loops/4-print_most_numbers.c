#include "main.h"
/**
 * print_most_numbers - print most numbers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 52 || i == 50)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
