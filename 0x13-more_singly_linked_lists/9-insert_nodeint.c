#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: address to head of list
 * @idx: index of new element
 * @n: new element
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	h = *head;
	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (*head);
	}

	while (idx-- > 1 && h != NULL)
		h = h->next;

	if (h == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = h->next;
	h->next = new;

	return (new);
}
