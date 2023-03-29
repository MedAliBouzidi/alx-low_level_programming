#include <stdio.h>
#include "main.h"

/**
 * print_buffer - print a buffer
 *
 * @b: pointer to the buffer
 * @size: of bytes of the buffer
 */
void print_buffer(char *b, int size)
{
	int x = 0, i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	while (x < size)
	{
		j = (size - x < 10) ? size - x : 10;
		printf("%08x: ", x);
		i = 0;
		while (i < 10)
		{
			(i < j) ? printf("%02x", *(b + x + i)) : printf(" ");
			if (i % 2)
				printf(" ");
			i++;
		}
		i = 0;
		while (i < j)
		{
			int y = *(b + x + i);

			if (y < 32 || y > 132)
				y = 46; /* 46 = . */
			printf("%c", y);
			i++;
		}
		printf("\n");
		x += 10;
	}
}
