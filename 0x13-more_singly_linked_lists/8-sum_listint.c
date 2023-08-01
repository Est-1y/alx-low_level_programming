#include "lists.h"

/**
 * sum_listint - it calculates the sum of all data in a listint_t
 * @head: the first node
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
