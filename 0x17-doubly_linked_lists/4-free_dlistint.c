#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free a dlistint_t list.
 * @head: Pointer to the beginning of the linked list.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
