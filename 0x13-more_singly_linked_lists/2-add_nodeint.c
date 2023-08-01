#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The int to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode;

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
