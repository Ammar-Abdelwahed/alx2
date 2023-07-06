#include "main.h"

/**
 * binary_to_uint - covert binary to unsigned int
 * @b: string contain binary number
 * Return: the coverted number if success, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			decimal = decimal * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (decimal);
}
