#include "lists.h"

/**
 * pop_listint - deletes the head node.
 * @head: head.
 *
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int head_node;

	listint_t *b;

	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	b = current->next;

	free(current);

	*head = b;

	return (head_node);
}

