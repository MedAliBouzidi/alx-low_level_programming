#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: pointer to the string
 *
 * Return: the length of string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
