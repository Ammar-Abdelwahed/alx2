#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char c;
	/* get the last character of the string */
	while (s[i] != 0)
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		i--;
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
