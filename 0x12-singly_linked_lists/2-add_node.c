#include "lists.h"
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

	for (i = 0; str[i]; ++i)
	{
	}
	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (0L);
	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
