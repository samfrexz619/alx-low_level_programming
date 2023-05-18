#include "lists.h"
/**
 * free_dlistint - frees dlistint_t ls
 * @head: head
 * Return: nth
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tm;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tm = head) != NULL)
	{
		head = head->next;
		free(tm);
	}
}
