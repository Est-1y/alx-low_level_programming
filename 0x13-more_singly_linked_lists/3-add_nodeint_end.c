#include "lists.h"

/**
 * add_nodeint_end - it adds node at the end of linked list
 * @head: it points to first element in list
 * @n: the data to be inserted in new element
 * Return: pointer to the new node( success)
 * NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
