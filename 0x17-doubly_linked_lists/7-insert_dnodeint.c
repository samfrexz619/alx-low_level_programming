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
	dlistint_t *nnode;
	dlistint_t *hd;
	unsigned int index;

	nnode = NULL;
	if (idx == 0)
		nnode = add_dnodeint(h, n);
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
					nnode = add_dnodeint_end(h, n);
				else
				{
					nnode = malloc(sizeof(dlistint_t));
					if (nnode != NULL)
					{
						nnode->n = n;
						nnode->next = hd->next;
						nnode->prev = hd;
						hd->next->prev = nnode;
						hd->next = nnode;
					}
				}
				break;
			}
			hd = hd->next;
			index++;
		}
	}
	return (nnode);
}
