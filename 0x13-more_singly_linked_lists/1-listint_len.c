#include "lists.h"
/**
 * listint_len -  function that returns the number of elements in a linked
 * @h: The list_t list.
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	const listint_t *currentNode = h;

	while (currentNode)
	{
		currentNode = currentNode->next;
		nodes++;
	}
	return (nodes);
}
