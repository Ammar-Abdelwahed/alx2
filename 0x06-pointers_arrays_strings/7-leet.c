#include "main.h"
/**
 * leet - encoding letters to numbers
 * @x: the string to be encodded
 * Return: the encodded string
 */
char *leet(char *x)
{
	int i;
	int j;
	char L[] = "aAeEoOtTlL";
	char N[] = "4433007711";

	for (i = 0; x[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == L[j])
			{
				x[i] = N[j];
			}
		}
	}
	return (x);
}
