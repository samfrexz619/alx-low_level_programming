#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head
 *
 * Return: ptr of the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	x = NULL;
	y = NULL;

	for (; *head != NULL;)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;
	return (*head);
}

