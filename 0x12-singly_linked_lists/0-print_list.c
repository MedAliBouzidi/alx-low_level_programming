#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		putchar('\n');
		h = h->next;
		i++;
	}
	return (i);
}
