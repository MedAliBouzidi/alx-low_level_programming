#include "main.h"

/**
 * _islower - chech for lowercase character
 *
 * @c: The character ascii code
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
