#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely (without loops).
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes;
	const listint_t *currentNode, *tmp;

	nnodes = 0;
	currentNode = head;
	while (currentNode)
	{
		printf("[%p] %d\n", (void *) currentNode, currentNode->n);
		nnodes++;

		tmp = currentNode->next;
		if (tmp >= currentNode)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			exit(98);
		}
		currentNode = tmp;
	}
	return (nnodes);
}
