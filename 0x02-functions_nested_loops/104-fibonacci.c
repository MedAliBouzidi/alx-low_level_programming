#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long f = 1, s = 2, tmp1, max = 100000000, fo = 0, so = 0, tmp2;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (fo > 0)
		printf("%lu", fo);
		initial0s = numLength(max) - 1 - numLength(f);
		while (fo > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f);
		tmp1 = (f + s) % max;
		tmp2 = fo + so + (f + s) / max;
		f = s;
		fo = so;
		s = tmp1;
		so = tmp2;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
