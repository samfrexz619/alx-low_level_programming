#include "lists.h"

/**
 * print_listint - prints the elements of a list.
 * @h: head.
 *
 * Return: nums of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	for (; h != NULL; num_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
