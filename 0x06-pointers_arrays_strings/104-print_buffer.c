#include <stdio.h>
#include "main.h"

/**
 * print_line - print a x bytes of a buffer
 * @s: buffer to print
 * @x: bytes of buffer
 * @l: line of buffer
 */
void print_line(char *s, int x, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= x)
			printf("%02x", s[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= x; k++)
	{
		if (s[l * 10 + k] > 31 && s[l * 10 + k] < 127)
			putchar(s[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - print a buffer
 *
 * @b: pointer to the buffer
 * @size: of bytes of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
			print_line(b, 9, i);
		else
			print_line(b, size % 10 - 1, i);
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
