#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: the destination
 * @src: string to be copied
 * @n: number of bytes to be copied from src
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
