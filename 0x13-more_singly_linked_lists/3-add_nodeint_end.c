#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @n: int to add to the new node
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *initnode;

	initnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;   /* set value */
	newnode->next = NULL;   /* mark end */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (initnode->next)
		initnode = initnode->next;
	initnode->next = newnode;
	return (newnode);
}
