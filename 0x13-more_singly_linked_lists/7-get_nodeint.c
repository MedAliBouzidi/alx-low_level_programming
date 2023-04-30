#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list
 *
 * @head: address of the head of list
 * @index: index of the node
 *
 * Return: address of the nth node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i++ < index && head != NULL)
		head = head->next;

	if (head == NULL)
		return (NULL);

	return (head);
}
