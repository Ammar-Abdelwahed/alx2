#include "main.h"
/**
 * _strcat - concatenate two strings
 * @src: the first string
 * @dest: the second string
 * Return: the oncatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
