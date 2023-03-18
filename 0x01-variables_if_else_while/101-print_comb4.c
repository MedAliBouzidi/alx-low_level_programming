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
	short c;

	for (a = 0; a < 8; a++)
		for (b = 1; b < 9; b++)
			for (c = 2; c < 10; c++)
				if (a != b && a < b)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}
