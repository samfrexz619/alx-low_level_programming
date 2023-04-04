#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 * @head: head
 * @idx: index
 * @n: int element
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new_node;
	listint_t *hd;

	hd = *head;

	if (idx != 0)
	{
		index = 0;
		while (index < idx - 1 && hd != NULL)
		{
			hd = hd->next;
			index++;
		}
	}
	if (hd == NULL && idx != 0)
		return (NULL);
	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = hd->next;
		hd->next = new_node;
	}
	return (new_node);
}
