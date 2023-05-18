#include "lists.h"
/**
 * add_dnodeint - adds new node
 * @head: head
 * @n: value
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_adr;
	dlistint_t *hd;

	nw_adr = malloc(sizeof(dlistint_t));
	if (nw_adr == NULL)
		return (NULL);

	nw_adr->n = n;
	nw_adr->prev = NULL;
	hd = *head;

	if (hd != NULL)
	{
		while (hd->prev != NULL)
			hd = hd->prev;
	}

	nw_adr->next = hd;

	if (hd != NULL)
		hd->prev = nw_adr;

	*head = nw_adr;

	return (nw_adr);
}
