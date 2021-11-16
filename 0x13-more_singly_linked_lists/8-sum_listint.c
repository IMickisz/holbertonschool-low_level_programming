#include "lists.h"

/**
 * sum_listint - add all the data (n) of listint_t
 * @head: pointer to the start of the list
 * Return: sum of all the data (n) of listint_t
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head->next; head = head->next)
		sum += head->n;
	sum += head->n;
	return (sum);
}
