#include "lists.h"
/**
  * add_nodeint_end - adds node at the end
  * @head: pointer to the linked listd (double pointer)
  * @n: length of the list
  * Return: pinter to the liked list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *iterator = *head;
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (0L);
	tmp->next = 0L;
	tmp->n = n;
	if (!(*head))
	{
		*head = tmp;
		return (*head);
	}
	while (iterator->next)
	{
		iterator = iterator->next;
	}
	iterator->next = tmp;
	return (*head);
}
