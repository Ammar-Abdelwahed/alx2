#include "main.h"
/**
 * print_alphabet_x10 print the alphabe 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	for (j; j < 11; j++)
	{
		for(i = 97; i <= 122; i++)
		{
			_pychar(i);
		}
		_purchar('\n');
	}
}