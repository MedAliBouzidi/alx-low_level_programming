#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: pointer to string
 * @accept: number of bytes
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int l = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j) && *(accept + j) != *(s + i))
			j++;
		if (*(s + i) == *(accept + j))
			l++;
		if (!*(accept + j))
			return (l);
		i++;
	}
	return (l);
}
