#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - compare integers
 * @array: the integers to be compared
 * @size: the size of array
 * @cmp: the function used to compare ints
 * Return: index of the number if success, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
