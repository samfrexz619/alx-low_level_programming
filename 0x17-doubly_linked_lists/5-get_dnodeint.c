#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	idx = 0;

	while (head != NULL)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}

	return (head);
}
