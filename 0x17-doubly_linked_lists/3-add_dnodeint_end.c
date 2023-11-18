#include "lists.h"

/**
  * add_dnodeint_end - add node at end of d list
  * @head: the list
  * @n: the value
  * Return: the list after adding
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *tmp2 = *head;

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (*head == NULL)
	{
		(*head) = tmp;
		return (*head);
	}
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp;
	tmp->prev = tmp2;
	return (*head);
}
