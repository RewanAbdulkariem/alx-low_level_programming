#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currentNode, *node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	currentNode = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (currentNode->next == NULL)
			return (-1);
		currentNode = currentNode->next;
	}
	node = currentNode->next;
	currentNode->next = node->next;
	free(node);
	return (1);
}
