#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to head of list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->str != NULL)
		free(head->str);
	if (head->next != NULL)
		free(head->next);
}
