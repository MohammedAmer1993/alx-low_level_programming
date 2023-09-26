#include "lists.h"
/**
  * add_nodeint - add node to linked list
  * @head: pointer to linked list
  * @n: the place of the node
  * Return: pointer to linked list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(listint_t);

	if (!tmp)
		return (0L);
	tmp->n = n;
	tmp->next = *head;
	(*head) = tmp;
	return (*head);
}
