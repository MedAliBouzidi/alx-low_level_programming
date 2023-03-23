#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long i, number = 612852475143;

	for (i = 2; i <= number; i++)
		if (number % i == 0)
		{	
			number = number / i;
			i--;
		}
	printf("%ld\n", i);
	return (0);
}
