#include "lists.h"
/**
 * get_nodeint_at_index - function that gets the node of specific index
 * @head:pointer to head
 * @index: index of the node starting at 0
 * Return: the index if the node, if node doesn't exist return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
