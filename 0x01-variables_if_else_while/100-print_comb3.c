#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	short a;
	short b;

	for (a = 0; a < 9; a++)
		for (b = 1; b < 10; b++)
		{
			if (a != b && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
