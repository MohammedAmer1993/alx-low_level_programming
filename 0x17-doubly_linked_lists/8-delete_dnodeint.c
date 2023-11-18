#include "lists.h"

/**
  * delete_dnodeint_at_index - delete a node
  * @head: the list
  * @index: the postion of node
  * Return: 1 if succeed -1 when fail
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *tmp2;
	unsigned int i;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; ++i)
		if (tmp->next)
			tmp = tmp->next;
		else
		{
			return (-1);
		}
	tmp2 = tmp->prev;
	if (tmp->next)
	{
		tmp->next->prev = tmp2;
		tmp2->next = tmp->next;
		free(tmp);
		return (1);
	}
	else
	{
		tmp2->next = NULL;
		free(tmp);
		return (1);
	}
}

