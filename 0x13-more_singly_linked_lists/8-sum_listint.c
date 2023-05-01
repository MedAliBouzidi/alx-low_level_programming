#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 *
 * @head: address of the head of list
 *
 * Return: the sum of elements of list
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
