#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at certain poistion
  * @head: pointer to linked list
  * @idx: place of the node
  * @n: value of int member of the node
  * Return: pointer to the frist node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *tmp2 = malloc(sizeof(listint_t));

	if (!tmp2)
		return (0L);
	if (*head == 0L && idx == 0)
	{
		tmp2->n = n;
		tmp2->next = 0L;
		*head = tmp2;
		return (*head);
	}
	else if (*head == 0L && idx != 0)
		return (0L);
	if (*head != 0 && idx == 0)
	{
		tmp2->next = tmp;
		tmp2->n = n;
		*head = tmp2;
		return (*head);
	}
	for (i = 0; i < idx - 1; ++i)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			return (0L);
	}
	tmp2->next = tmp->next;
	tmp2->n = n;
	tmp->next = tmp2;
	return (*head);
}
