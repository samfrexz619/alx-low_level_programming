#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; (temp = head) != NULL;)
	{
		head = head->next;
		free(temp);
	}
}