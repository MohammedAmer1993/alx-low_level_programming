#include "lists.h"
/**
  * get_nodeint_at_index - get a certain node value
  * @head: pointer to frist node
  * @index: place of wanted node
  * Return: pointer to linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i < index; ++i)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			return (0L);
	}
	return (tmp);
}
