#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of a list
  * @h: linked list to print
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
