#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	int s;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s += i;
	}
	printf("%d", s);
	putchar('\n');
	return (0);
}
