#include "lists.h"
/**
  * print_listint - print linked list
  * @h: pointer to the list
  * Return: the count of nodes
  */

size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	if (h->next)
	{
		return (print_listint(h->next) + 1);
	}
	else
	{
		return (1);
	}
}
