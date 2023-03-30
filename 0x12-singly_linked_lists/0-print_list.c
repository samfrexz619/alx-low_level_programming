#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	for (; h != NULL; num++)
	{
		(h->str == NULL)
		? printf("[%d] %s\n", 0, "(nil)")
		: printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (num);
}
