#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * binar_to_uint - convert from binary to unsigned int
 * @b: the binary number
 * Return: the unsigned int number if success, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
