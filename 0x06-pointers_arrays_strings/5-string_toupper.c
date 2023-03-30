#include "main.h"
/**
 * string_toupper - change lowercase letters to upper
 * @x: the string
 * Return: the string with all uppercase
 */
char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] -= 32;
		}
	}
	return (x);
}
