#include "lists.h"
/**
  * sum_listint - sum of all value in each node
  * @head: pointer to frist element of linked list
  * Return: the sum
  */
int sum_listint(listint_t *head)
{
	if (head == 0L)
		return (0);
	if (head->next)
	{
		return (sum_listint(head->next) + (head->n));
	}
	return (head->n);
}
