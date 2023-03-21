#include "main.h"

/**
 * _isalpha - check for character alphabet or not
 *
 * @c: The character ascii code
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
