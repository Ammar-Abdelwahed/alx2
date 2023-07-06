#include "main.h"

/**
 * set_bit - change the value of a bit to 1 given index
 * @n: the number to be checked
 * @index: the index to be checked
 * Return: 1if success, -1 othewise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
