#include <stdio.h>
#include "lists.h"
/**
 * list_len - count the number of elements in a linked list
 * @h: pointer t o the list
 * Return: number of lements in the lis if success
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
