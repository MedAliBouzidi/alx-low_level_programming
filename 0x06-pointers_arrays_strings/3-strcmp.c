#include "main.h"

/**
 * _strcmp - compare two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: reslt of first non-matching character s1
 * minus that of s2, otherwise 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
