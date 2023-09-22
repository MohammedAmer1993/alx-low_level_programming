#include "lists.h"
/**
  * add_node_end - adds node at end of linked list
  * @head: the list
  * @str: the string member
  * Return: the list address
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *iterator;
	int i;

	for (i = 0; str[i]; ++i)
	{
	}

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (0L);
	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = 0L;
	if (*head == 0L)
	{
		*head = tmp;
		return (*head);
	}
	else
	{
		iterator = *head;
		while (iterator->next)
			iterator = iterator->next;
	}
	iterator->next = tmp;
	return (*head);
}
