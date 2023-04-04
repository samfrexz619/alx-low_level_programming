#include "lists.h"

/**
 * sum_listint - returns the sum
 * @head: head
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum_total;

	sum_total = 0;

	for (; head != NULL;)
	{
		sum_total += head->n;
		head = head->next;
	}
	return (sum_total);
}
