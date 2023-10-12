#include "lists.h"

/**
 * dlistint_len - Count the number of nodes in the linked list.
 * @h: Pointer to the beginning of a linked list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
