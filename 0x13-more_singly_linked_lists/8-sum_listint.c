#include "lists.h"


/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to head
 * Return: sum of data stored in linkedlist.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
