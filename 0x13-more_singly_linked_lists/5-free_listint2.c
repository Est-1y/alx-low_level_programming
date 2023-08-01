#include "lists.h"

/**
 * free_listint - it frees linked list
 * @head: it points to listint_t to be freed
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}
