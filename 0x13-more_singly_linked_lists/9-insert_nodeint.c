#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the start of the list
 * @idx:  index of the list where the new node should be added
 * @n: data in the new node
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tail;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	tail = *head;
	for (i = 0; i < (idx - 1) && tail->next; i++) /* walk idx */
		tail = tail->next;
	if (i < idx - 1)
		return (NULL);
	newnode->next = tail->next;
	tail->next = newnode;
	return (newnode);
}
