#include "lists.h"

/**
 * sum_dlistint - Computes the sum of data values in a dlistint_t linked list.
 *
 * @head: A pointer to the beginning of the linked list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
