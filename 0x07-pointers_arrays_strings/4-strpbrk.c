#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to string
 * @accept: set to search for
 *
 * Return: pointer to the byte in s that latches one
 * of the bytes in accept, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j) && *(accept + j) != *(s + i))
			j++;
		if (*(accept + j) == *(s + i))
			return (s + i);
		i++;
	}
	return ('\0');
}
