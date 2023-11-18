#include "lists.h"

/**
  * dlistint_len - length of d linked list
  * @h: the list
  * Return: number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (!h)
	{
		return (0);
	}
	while (h->next)
	{
		++i;
		h = h->next;
	}
	return (++i);
}

