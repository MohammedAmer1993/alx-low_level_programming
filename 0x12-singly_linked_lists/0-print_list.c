#include "lists.h"
/**
  * print_list - prints a singly linked list
  * @h: the linked list
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	if (!h)
		return (0);
	if (h->str)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	if (h->next)
	{
		return (1 + print_list(h->next));
	}
	else
	{
		return (1);
	}
}
