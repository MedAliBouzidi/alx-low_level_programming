#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *
 * @str: given string
 *
 * Return: pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	char *s;
	int l, i;

	if (str == NULL)
		return (NULL);

	l = i = 0;
	while (*(str + l))
		l++;

	s = malloc(l * sizeof(*str));

	if (s == NULL)
		return (NULL);

	while (i < l)
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}
