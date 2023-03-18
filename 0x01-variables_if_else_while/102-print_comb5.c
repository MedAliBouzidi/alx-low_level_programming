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
	short d;
	short comb1;
	short comb2;

	for (a = 0; a < 10; a++)
	for (b = 0; b < 9; b++)
	for (c = 0; c < 10; c++)
	for (d = 0; d < 10; d++)
	{
		comb1 = a * 10 + b;
		comb2 = c * 10 + d;
		if (comb1 != comb2 && comb1 < comb2)
		{

			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');
			if (a + '0' + b != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
