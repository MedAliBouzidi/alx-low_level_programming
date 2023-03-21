#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	long f = 1, s = 2, n = f + s;

	printf("%ld, %ld", f, s);
	for (i = 1; i < 50; i++)
	{
		if (i != 49)
			printf(", ");
		printf("%ld", n);
		f = s;
		s = n;
		n = f + s;
	}
	putchar('\n');
	return (0);
}
