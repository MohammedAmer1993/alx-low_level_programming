#include "lists.h"

/**
  * free_dlistint - free d list
  * @head: the list
  * Return: Nothing
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		return;
	}
	while (head->next)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(tmp);
}
