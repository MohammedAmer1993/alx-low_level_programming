#include "lists.h"

/**
  * sum_dlistint - sum of d list
  * @head: the list
  * Return: the sum of all nodes
  */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
	{
		return (0);
	}
	while (head->next)
	{
		total += head->n;
		head = head->next;
	}
	total += head->n;
	return (total);
}

