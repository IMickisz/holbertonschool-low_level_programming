#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: double pointer to the start of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
        head = NULL;
}
