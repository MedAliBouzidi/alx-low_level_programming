#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long f = 1, s = 2, n = f + s, total = 0;

	while (n < 4000000)
	{
		if (n % 2 == 0)
			total += n;
		f = s;
		s = n;
		n = f + s;
	}
	printf("%ld\n", total);
	return (0);
}
