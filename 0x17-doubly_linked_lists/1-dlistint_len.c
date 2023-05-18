#include "lists.h"
/**
 * dlistint_len - num of elements
 * @h: head
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}

