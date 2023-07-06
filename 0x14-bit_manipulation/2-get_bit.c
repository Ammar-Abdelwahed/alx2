#include "main.h"

/**
 * get_bit - check the value of a bit given index
 * @n: number to be checked
 * @index: the index of the bit
 * Return: the value of the bit if success, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}

	bit = (n >> index) & 1;
	return (bit);
}
