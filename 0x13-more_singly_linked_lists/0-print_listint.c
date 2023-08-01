#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: The list_t list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes;
	const listint_t *currentNode;

	nnodes = 0;
	currentNode = h;
	while (currentNode)
	{
		printf("%d\n", currentNode->n);
		currentNode = currentNode->next;
		nnodes++;
	}
	return (nnodes);
}
