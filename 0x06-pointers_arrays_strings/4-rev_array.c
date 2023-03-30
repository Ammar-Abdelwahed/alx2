#include "main.h"
/**
 * reverse_array - reverse elements of an array
 * @a: the array to be reversed
 * @n: number of elemnts of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
