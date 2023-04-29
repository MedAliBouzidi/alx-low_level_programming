#include "lists.h"

/**
 * *add_nideint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to the address of head of list
 * @n: element to adds to list
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;

	h->next = new;

	return (*head);
}
