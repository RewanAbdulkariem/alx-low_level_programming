#include "lists.h"
/**
 * reverse_listint - Reverses a linked list in-place.
 * @head: A pointer to the head of the linked list.
 * Return: A pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curNode, *prevNode;

	if (!(*head) || !(*head)->next)
		return (*head);

	prevNode = *head;
	(*head) = (*head)->next;
	curNode = *head;
	prevNode->next = NULL;

	while (*head != NULL)
	{
		(*head) = (*head)->next;
		curNode->next = prevNode;
		prevNode = curNode;
		curNode = *head;
	}
	*head = prevNode;
	return (*head);
}
