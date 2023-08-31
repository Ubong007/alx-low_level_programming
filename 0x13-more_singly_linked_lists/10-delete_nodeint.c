#include "lists,h"

/**
 * insert_nodeint_at_index - Inserts a new node into a linked list
 *                          at a specified position.
 * @head: Pointer to the pointer of the first node in the list.
 * @idx: Index where the new node should be added.
 * @n: Data to insert into the new node.
 *
 * Return: Pointer to the new node, or NULL if insertion is unsuccessful.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)

	{
		listint_t *temp = *head;
		listint_t *current = NULL;
		unsigned int i = 0;
		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}

		while (i < index - 1)
		{
			if (!temp || !(temp->next))
				return (-1);
			temp = temp->next;
			i++;
		}

		current = temp->next;
		temp->next = current->next;
		free(current);

		return (1);
	
	}
