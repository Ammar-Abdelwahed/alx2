#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all elments of a linked list
 * @h: pointer to the list to be printed
 * Return: number of nodes if success, 0 otherwise
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
