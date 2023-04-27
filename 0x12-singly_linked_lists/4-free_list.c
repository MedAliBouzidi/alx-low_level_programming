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

	free_list(head->next);
	free(head->str);
	free(head->next);
}
