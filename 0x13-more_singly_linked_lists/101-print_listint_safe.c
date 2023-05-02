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
	int n = 0;
	long int diff;

	if (head == NULL)
		exit(98);

	while (head)
	{
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		n++;

		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (n);
}
