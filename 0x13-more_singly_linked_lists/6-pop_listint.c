#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: head of list
 *
 * Return: head node's data (n), or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return (0);

	h = *head;
	*head = (*head)->next;
	free(h);
	return ((*head)->n);
}
