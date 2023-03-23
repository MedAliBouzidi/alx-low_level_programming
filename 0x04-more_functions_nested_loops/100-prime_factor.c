#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long number = 612852475143, largest;

	for (i = 2; i <= number / 2; i++)
		if (number % i == 0)
			largest = number / i;
	printf("%ld\n", largest);
	return (0);
}
