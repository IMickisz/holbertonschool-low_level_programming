#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str == NULL)
		return (NULL);
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(str);
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->len = _strlen(str);
	new_list->next = NULL;
	if (*head == NULL)
	{
		*head  = new_list;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_list;
	return (new_list);
}

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
