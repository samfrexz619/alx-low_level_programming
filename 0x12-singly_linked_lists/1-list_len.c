#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	for (; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
