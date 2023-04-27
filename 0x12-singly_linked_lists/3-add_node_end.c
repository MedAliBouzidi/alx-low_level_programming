#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to the address of pointer pointed to head of list
 * @str: str to add to list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	list_t *new, *h;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (*(str + l))
		l++;

	new->str = strdup(str);
	new->len = l;
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
