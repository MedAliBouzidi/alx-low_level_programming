#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: address of first element of list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
