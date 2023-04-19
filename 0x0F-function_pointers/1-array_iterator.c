#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - apply a function on each elment of an array
 * @array: the array
 * @size: the size of the array
 * @action: the function to be applied
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
