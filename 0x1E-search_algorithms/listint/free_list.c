#include <stdlib.h>
#include "search_algos.h"

/**
 * free_list - remove a singly linked list.
 * @list: it Points to the linked list meant to be freed
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
