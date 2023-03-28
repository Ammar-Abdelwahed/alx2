#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;
	/* get the last character of the string */
	while (s[i] != 0)
	{
		i++;
	}
	/* decrease the value by 1 because of the null value */
	if (i > 0)
	{
		i--;
	}

	while (j != i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
		i--;
	}
}
