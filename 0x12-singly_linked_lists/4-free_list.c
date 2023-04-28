#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the memory used by a list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *del;

	while (head)
	{
		del = head->next;
		free(head->str);
		free(head);
		head = del;
	}
}
