#include "lists.h"
/**
  * free_listint - free each node of linked list
  * @head: pointer to frist node of linked list
  * Return: nothing (void fun)
  */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (!head)
		return;
	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
