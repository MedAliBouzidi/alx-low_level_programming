#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	long p = 1, c = 2;

	printf("%d, %d", p, c);
	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
			printf(", ");
		printf("%ld", p + c);
		p = c;
		c = p + c;
	}
	putchar('\n');
	return (0);
}
