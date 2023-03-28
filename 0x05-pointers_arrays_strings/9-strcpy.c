#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: the destination
 * @src: the source to be copied
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != 0)
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
