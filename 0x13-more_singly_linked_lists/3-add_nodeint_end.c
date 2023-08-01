#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: int to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;

	return (newNode);
}
