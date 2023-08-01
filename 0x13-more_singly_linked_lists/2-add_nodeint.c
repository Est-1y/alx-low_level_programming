#include "lists.h"

/**
 * add_nodeint - it adds a node at the beginning of a linked list
 * @head: it points the first node in the list
 * @n: the data to be inserted on new node
 *
 * Return: pointer to the new node (success)
 *  NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
