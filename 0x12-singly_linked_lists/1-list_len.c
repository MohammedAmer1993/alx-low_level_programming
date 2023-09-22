#include "lists.h"
/**
  * list_len - length of linked list
  * @h: the list
  * Return: the number of nodes
  */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (h->next)
	{
		return (1 + list_len(h->next));
	}
	else
	{
		return (1);
	}
}
