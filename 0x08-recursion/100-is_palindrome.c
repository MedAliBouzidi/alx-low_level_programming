#include "main.h"

/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(++s));
}

/**
 * verifier - compare to characters recursively
 *
 * @s: starting index
 * @e: ending index
 * @str: string
 *
 * Return: 1 if s is palindrome, 0 else
 */
int verifier(int s, int e, char *str)
{
	if (s >= e)
		return (1);
	if (*(str + s) == *(str + e))
		return (verifier(++s, --e, str));
	return (0);
}

/**
 * is_palindrome - checks if string is palinfrome
 *
 * @s: string ti checks
 *
 * Return: 1 if s is palindrome, else return 0
 */
int is_palindrome(char *s)
{
	int l;

	if (!*s)
		return (0);
	l = _strlen(s);
	return (verifier(0, --l, s));
}
