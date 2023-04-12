#include "main.h"
#include <stdlib.h>
/**
 * create_array - function creates array using malloc
 * @size: the size of the array
 * @c: the char to be added to the array
 * Return: null if no memory allocated or the array if success
 */
char *create_array(unsigned int size, char c)
{
	char *w;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	w = malloc(sizeof(char) * size);
	if (w == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		w[i] = c;
	}
	return (w);
}
