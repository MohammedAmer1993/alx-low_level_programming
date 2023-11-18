#include "lists.h"

/**
  * add_dnodeint - adds at the begining of d linked list
  * @head: the list
  * @n: the value of node
  * Return: the d linked list
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

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
	tmp->next = *head;
	(*head)->prev = tmp;
	*head = tmp;
	return (*head);
}
