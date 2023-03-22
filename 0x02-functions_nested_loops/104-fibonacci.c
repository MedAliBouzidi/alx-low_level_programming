#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	short i;
	unsigned long f = 1, s = 2, n;
	unsigned long fh1, fh2, sh1, sh2;
	unsigned long h1, h2;

	printf("%ld, %ld, ", f, s);
	for (i = 0; i < 45; i++)
	{
		n = f + s;
		printf("%lu, ", n);
		f = s;
		s = n;
	}
	fh1 = f / 1000000000;
	sh1 = s / 1000000000;
	fh2 = f % 1000000000;
	sh2 = s % 1000000000;
	for (i = 45; i < 99; i++)
	{
		h1 = fh1 + sh1;
		h2 = fh2 + sh2;
		if (h2 > 999999999)
		{
			h1++;
			h2 %= 1000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");
		fh1 = sh1;
		fh2 = sh2;
		sh1 = h1;
		sh2 = h2;
	}
	putchar('\n');
	return (0);
}
