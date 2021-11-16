#include "lists.h"

/**
  * listint_len - show the number of elements of a list
  * @h: linked list
  * Return: number of elements of a list
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
