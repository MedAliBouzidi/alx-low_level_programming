#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 *
 * @head: address to head of list
 * @index: index of element to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h, *to_delete;

	if (head == NULL || *head == NULL)
		return (-1);

	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}

	while (i++ < (index - 1) && h != NULL)
		h = h->next;

	if (h == NULL)
		return (-1);

	to_delete = h->next;
	h->next = to_delete->next;
	free(to_delete);

	return (1);
}
