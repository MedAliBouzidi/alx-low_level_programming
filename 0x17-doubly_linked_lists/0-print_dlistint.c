#include "lists.h"

/**
 * print_dlistint - print the data and count the nodes
 *
 * @h: head, ptr to the first node
 *
 * Return: count of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}


