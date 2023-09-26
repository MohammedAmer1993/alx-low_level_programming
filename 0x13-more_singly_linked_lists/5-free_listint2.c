#include "lists.h"
/**
  * free_listint2 - free every node of linked list
  * @head: pointer to linked list
  * return: nothing (void func)
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

        if (!(*head))
                return;
        while ((*head)->next)
        {
                tmp =(*head)->next;
                free(*head);
                *head = tmp;
        }
        free(*head);
	*head = 0L;
}
