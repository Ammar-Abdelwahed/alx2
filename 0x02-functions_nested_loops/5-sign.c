#include "main.h"
/**
 * print_sigm - check the sign of a number
 * @c: the number
 * Return: 1 if the number is postive. 0if zero. -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
