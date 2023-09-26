#include "lists.h"
/**
  * pop_listint - pops a node from linked list
  * @head: pointer to linked list
  * Return: number of nodes
  */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp = *head;

	if (*head == 0L)
		return (0);
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
