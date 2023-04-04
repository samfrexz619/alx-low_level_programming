#include "lists.h"

/**
 * get_nodeint_at_index - returns the node index
 * @head: head
 * @index: index of the node
 *
 * Return: index node and returns NULL if doesn't exits
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	idx = 0;

	while (idx < index && head != NULL)
	{
		head = head->next;
		idx++;
	}
	return (head);
}
