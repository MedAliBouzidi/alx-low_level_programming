#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: pointer to the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (!*s)
		return (0);
	else
		while (*s)
		{
			len++;
			s++;
		}
	return (len);
}
