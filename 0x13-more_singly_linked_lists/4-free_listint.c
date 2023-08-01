#include "lists.h"

/**
 * free_listint - it frees linked list
 * @head: the listint_t to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
