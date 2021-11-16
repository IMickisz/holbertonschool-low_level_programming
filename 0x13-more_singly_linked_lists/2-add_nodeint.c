#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: original linked list
  * @n: int to add to the node
  * Return: address of the new list or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;
	return (newnode);
}
