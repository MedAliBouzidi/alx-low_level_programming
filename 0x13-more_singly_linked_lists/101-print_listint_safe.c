#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: address of the head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	for (; head ; n++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}

	return (--n);
}
