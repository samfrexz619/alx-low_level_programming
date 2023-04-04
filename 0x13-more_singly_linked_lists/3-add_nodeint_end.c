#include "lists.h"

/**
 * add_nodeint_end - add new node to the end.
 * @head: head
 * @n: n element
 *
 * Return: address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	listint_t *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		for (; temp->next != NULL;)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}
