#include "main.h"

/**
 * wildcmp - compare two string
 *
 * @s1: first string
 * @s2: second string
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (!*s2);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
                return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
