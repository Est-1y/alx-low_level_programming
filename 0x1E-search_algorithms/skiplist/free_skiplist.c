#include <stdlib.h>
#include "search_algos.h"

/**
 * free_skiplist - removes a singly linked list.
 * @list: Points to the linked list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
