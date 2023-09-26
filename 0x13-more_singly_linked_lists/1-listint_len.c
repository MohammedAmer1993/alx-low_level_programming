#include "lists.h"
/**
  * listint_len - the length of linked list
  * @h: pointer to linked list
  * Return: the length of linked list
  */
size_t listint_len(const listint_t *h)
{
	if (h == 0L)
	return (0);
	if (h->next)
	{
		return (listint_len(h->next) + 1);
	}
	return (1);
}
