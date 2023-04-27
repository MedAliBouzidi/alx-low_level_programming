#include "lists.h"

/**
 * *add_node -  adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the head of list
 * @str: string to add to list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (*(str + l))
		l++;

	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;

	return (new);
}
