#include "lists.h"
/**
 * delete_nodeint_at_index - deleted node at a specific index
 * @head: head
 * @index: index
 *
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx;
	listint_t *last;
	listint_t *next;

	last = *head;

	if (index != 0)
	{
		idx = 0;
		while (idx < index - 1 && last != NULL)
		{
			last = last->next;
			idx++;
		}
	}

	if (last == NULL || (last->next == NULL && index != 0))
	{
		return (-1);
	}

	next = last->next;

	if (index != 0)
	{
		last->next = next->next;
		free(next);
	}
	else
	{
		free(last);
		*head = next;
	}
	return (1);
}
