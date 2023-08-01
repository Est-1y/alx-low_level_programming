#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node at index in a linked list
 * @head: the first node in linked list
 * @index: the index of node to be returned
 * Return: the pointer to the node we're looking for
 * or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
