#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	int p = 0, c = 1;

	printf("%d", p);
	for (i = 1; i <= 50; i++)
	{
		printf("%d", p + c);
		p = c;
		c = p + c;
	}
	putchar('\n');
	return (0);
}
