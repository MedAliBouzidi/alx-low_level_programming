#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to the header of the list
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}

	return (l);
}
