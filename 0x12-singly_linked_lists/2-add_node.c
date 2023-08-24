#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - inserts a new node at the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: New strings to be added in the node
 *
 * Return: The adress of the new element, or NULL if the inscertion fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
