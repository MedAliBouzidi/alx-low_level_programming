#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *s;

	l1 = l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;
	s = malloc(sizeof(*s1) * (l1 + l2 + 1));

	if (s == NULL)
		return (NULL);
	i = j = 0;
	while (j < l1)
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	while (j < l2)
	{
		*(s + i) = *(s2 + j);
		j++;
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
