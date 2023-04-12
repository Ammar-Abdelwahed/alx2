#include"main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two string using malloc
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string if success NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = i; j < (len1 + len2); j++)
	{
		concat[j] = s2[j - i];
	}
	concat[j] = '\0';
	return (concat);
}
