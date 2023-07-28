#include "lists.h"

/**
 * list_len -  function that returns the number of elements in a linked
 * @h: The list_t list.
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	int i;

	const list_t *currentNode = h;

	for (i = 0; currentNode != NULL; i++)
	{
		currentNode = currentNode->next;
	}
	nodes = i;
	return (nodes);
}
