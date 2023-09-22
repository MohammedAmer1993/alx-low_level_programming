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
	else
	{
		while (head->next)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}
