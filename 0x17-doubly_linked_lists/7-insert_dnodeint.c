#include "lists.h"

/**
  * fix_pointers - rearrange the pointers
  * @tmp: the node
  * @tmp2: the postion
  * @tmp3: tmp node
  * Return: Nothing
  */

void fix_pointers(dlistint_t **tmp, dlistint_t **tmp2, dlistint_t **tmp3)
{
	if ((*tmp2)->next)
	{
		(*tmp)->prev = (*tmp2);
		(*tmp)->next = (*tmp2)->next;
		(*tmp3)->prev = (*tmp);
		(*tmp2)->next = (*tmp);
	}
	else
	{
		(*tmp2)->next = (*tmp);
		(*tmp)->prev = (*tmp2);
	}
}

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
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *tmp2 = *h;
	dlistint_t *tmp3 = tmp2;

	if (!tmp)
		return (NULL);
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
	for (i = 0; i < idx - 1; ++i)
		if (tmp2->next)
			tmp2 = tmp2->next;
		else
		{
			free(tmp);
			return (NULL);
		}
	tmp3 = tmp2->next;
	fix_pointers(&tmp, &tmp2, &tmp3);
	return (tmp);
}
