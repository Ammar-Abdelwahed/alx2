#include "main.h"
/**
 * times_table - print all 9 tables
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 1; j++)
		{
			k = i * j;
			_putchar(k);
			if (i == 9 && j == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
