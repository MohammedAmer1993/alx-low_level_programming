#include "lists.h"

/**
  * print_dlistint - print doubly list
  * @h: the d list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
	{
		return (0);
	}
	while (h->next)
	{
		printf("%d\n", h->n);
		++i;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (++i);
}
