#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: address of to pointer of head of list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}

	*head = NULL;
}
