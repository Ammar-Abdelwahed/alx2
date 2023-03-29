#include "main.h"
/**
 * _strncat - concatenate n bytes of a string to another
 * @dest: first string
 * @src: second string
 * @n: n of bytes to be cncatenated from src
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
