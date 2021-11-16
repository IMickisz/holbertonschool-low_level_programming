#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - frees a list_t list
 * @head: pointer to the start of the list
 * @index: index of the node, starting at 0
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
