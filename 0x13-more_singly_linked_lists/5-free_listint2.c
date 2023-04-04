#include "lists.h"

/**
 * free_listint2 - frees the linked list.
 * @head: head
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	listint_t *temp;

	if (head != NULL)
	{
		current = *head;

		for (; (temp = current) != NULL;)
		{
			current = current-> next;
			free(temp);
		}
		*head = NULL;
	}
}
