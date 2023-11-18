#include "lists.h"

/**
  * insert_dnodeint_at_index - insert node
  * @h: the list
  * @idx: the postion
  * @n: the value
  * Return: the list after adding
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t * tmp = malloc(sizeof dlistint_t);
	dlistint_t * tmp2 = *h;

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;
	if (!(*h) && idx != 0)
	{
		free(tmp);
		return (NULL);
	}
	if (idx == 0)
	{
		tmp->next = *h;
		(*h) = tmp;
		return (tmp);
	}
	for (i = 0; i < idx; ++i)
	{
		if ((*h)->next)
		{
			(*h) = (*h)->next;
		}
		else
		{
			return (NULL);
		}
	}

	return (tmp);
}

