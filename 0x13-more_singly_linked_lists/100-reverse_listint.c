#include "lists.h"
/**
  * reverse_listint - reverse linked list
  * @head: pointer to pointer to linked list
  * Return: pointer to linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1 = (*head)->next;
	listint_t *tmp2 = (*head)->next;

	if (*head == 0L)
		return (*head);
	(*head)->next = 0L;
	while (tmp2)
	{
		tmp2 = tmp1->next;
		tmp1->next = *head;
		*head = tmp1;
		tmp1 = tmp2;
	}
	return (*head);
}
