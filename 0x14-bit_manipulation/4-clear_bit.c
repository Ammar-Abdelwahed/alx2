#include "main.h"

/**
 * clear_bit - change the value of a bit to 0 given index
 * @n: the number to be checked
 * @index: the index to be checked
 * Return: 1if success, -1 othewise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
