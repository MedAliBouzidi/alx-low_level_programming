#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	unsigned long f = 1, s = 2, n = f + s, limit = 100000000000;

	printf("%ld, %ld", f, s);
	for (i = 1; i < 97; i++)
	{
		if (i != 97)
			printf(", ");
		if (n < limit)
			printf("%lu", n);
		f = s;
		s = n;
		n = f + s;
	}
	putchar('\n');
	return (0);
}
