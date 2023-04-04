#include "lists.h"

/**
 * listint_len - returns the num of elements
 * @h: head of the list.
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	for (; h != NULL; num_node++)
	{
		h = h->next;
	}
	return (num_node);
}
