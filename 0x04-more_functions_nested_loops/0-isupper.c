#include "main.h"

/**
 * _isupper - check if character is uppercase or not
 *
 * @c: Charctere ascii code
 *
 * Return: 1 when c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
