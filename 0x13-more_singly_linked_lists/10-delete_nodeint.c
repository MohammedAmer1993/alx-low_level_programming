#include "lists.h"
/**
  * delete_nodeint_at_index - delete a node at certain position
  * @head: pointer to linked list
  * @index: the place of the node
  * Return: number of nodes
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *tmp2 = *head;

	if (*head == 0L)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; ++i)
	{
		if (tmp->next)
		{
			tmp = tmp->next;
			tmp2 = tmp2->next;
		}
		else
			return (-1);
	}
	tmp = tmp->next;
	tmp2->next = tmp->next;
	free(tmp);
	return (1);
}
