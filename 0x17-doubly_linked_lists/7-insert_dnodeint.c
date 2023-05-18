#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node
 * @h: head
 * @idx: index
 * @n: value
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_nd;
	dlistint_t *hd;
	unsigned int index;

	n_nd = NULL;
	if (index == 0)
		n_nd = add_dnodeint(h, n);
	else
	{
		hd = *h;
		index = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;

		while (hd != NULL)
		{
			if (index == idx)
			{
				if (hd->next == NULL)
					n_nd = add_dnodeint_end(h, n);
				else
				{
					n_nd = malloc(sizeof(dlistint_t));
					if (n_node != NULL)
					{
						n_nd->n = n;
						n_nd->next = hd->next;
						n_nd->prev = hd;
						hd->next->prev = n_nd;
						hd->next = n_nd;
					}
				}
				break;
			}
			hd = hd->next;
			index++;
		}
	}
	return (n_nd);
}
