#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all 'n' values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
