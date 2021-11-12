#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list
  * @head: original linked list
  * @str: string to add to the node
  * Return: address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		if (temp->str == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (NULL);
}

/**
  * _strlen - returns the length of a string
  * @s: string to count
  * Return: string length
  */

int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
