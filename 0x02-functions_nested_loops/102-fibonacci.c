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

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", p + c);
		if (i != 50)
			printf(", ");
		c = p + c;
		p = c;
	}
	putchar('\n');
	return (0);
}
