#include "lists.h"

/**
  * get_dnodeint_at_index - get a node
  * @head: the list
  * @index: the postion of node
  * Return: the value of node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	for (i = 0; i < index; ++i)
	{
		if (head->next)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
