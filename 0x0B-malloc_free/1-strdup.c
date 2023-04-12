#include "main.h"
#include <stdlib.h>
/**
 * _strdup - make a copy of a string using malloc
 * @str: the string to be copied
 * Return: the string if success, NULL otherwise
 */
char *_strdup(char *str)
{
	char *copy;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';

	return (copy);
}
