#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer to memory area
 * @b: the constant byte
 * @n: the number of bytes to fills
 *
 * @Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
