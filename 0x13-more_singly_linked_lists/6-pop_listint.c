#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to the header node
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *lastHead;

	if (!*head)
	{
		return (0);
	}
	lastHead = *head;
	data = (*head)->n;

	(*head) = (*head)->next;
	free(lastHead);

	return (data);
}
