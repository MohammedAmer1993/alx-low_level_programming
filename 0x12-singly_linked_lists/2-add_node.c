#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
  * add_node - insert node at head
  * @head: the linked list itself
  * @str: the string data
  * Return: the linked list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int i;

	if (*head)
		return (0L);
	for (i = 0; str[i]; ++i)
	{
	}
	tmp = malloc(sizeof(tmp));
	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = (*head)->next;
	*head = tmp;
	return (*head);
}
