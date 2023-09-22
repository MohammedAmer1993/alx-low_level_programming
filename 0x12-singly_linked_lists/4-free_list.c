#include "lists.h"
/**
  * free_list - free linked list
  * @head: the list
  * Return: nothing void func
  */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head->next)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
