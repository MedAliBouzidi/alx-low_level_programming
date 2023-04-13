#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenantes two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to append to s1
 *
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int fl, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	fl = 0;
	while (*(s1 + fl))
		fl++;

	s = malloc(sizeof(*s1) * (fl + n + 1));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (*s1)
		*(s + i++) = *s1++;
	i = 0;
	while (i < n)
		*(s + fl + i++) = *s2++;

	*(s + fl + i) = '\0';
	return (s);
}
