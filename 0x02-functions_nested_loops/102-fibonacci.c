#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	long p = 0, c = 1;

	printf("%d, ", p);
	for (i = 1; i <= 50; i++)
	{
		printf("%d", p + c);
		if (i != 50)
			printf(", ");
		p = c;
		c = p + c;
	}
	putchar('\n');
	return (0);
}