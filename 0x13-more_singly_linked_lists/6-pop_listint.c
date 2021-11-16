#include "lists.h"

/**
 * pop_listint - frees a list_t list
 * @head: double pointer to the start of the list
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
