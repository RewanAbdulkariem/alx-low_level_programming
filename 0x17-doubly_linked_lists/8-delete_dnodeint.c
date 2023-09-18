#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (i < index || current == NULL)
		return (-1);

	if (current->next == NULL)
	{
		if (current->prev != NULL)
			current->prev->next = current->next;
		else
			*head = NULL;
	}
	else
	{
		if (current->prev != NULL)
			current->prev->next = current->next;
		else
			*head = current->next;
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
