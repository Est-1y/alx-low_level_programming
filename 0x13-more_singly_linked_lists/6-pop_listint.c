#include "lists.h"

/**
 * pop_listint - it deletes head node of a linked list
 * @head: it points to first content in the linked list
 * Return: the data inside the content deleted
 * or 0 if empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
