#include "lists.h"
/**
 * add_dnodeint_end - adds new node
 * @head: head
 * @n: value
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *n_elem;

	n_elem = malloc(sizeof(dlistint_t));
	if (n_elem == NULL)
		return (NULL);

	n_elem->n = n;
	n_elem->next = NULL;

	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
			hd = hd->next;
		hd->next = n_elem;
	}
	else
	{
		*head = n_elem;
	}

	n_elem->prev = hd;

	return (n_elem);
}
