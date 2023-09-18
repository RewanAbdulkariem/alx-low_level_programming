#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be added (starting from 0).
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
    
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (i < idx - 1 || current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->next = current->next;
	new_node->prev = current;

	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
