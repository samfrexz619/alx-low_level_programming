#include "lists.h"
/**
 * sum_dlistint - sums all data
 * @head: head
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_data += head->n;
			head = head->next;
		}
	}

	return (sum_data);
}
