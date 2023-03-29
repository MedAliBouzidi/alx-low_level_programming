#include "main.h"

/**
 * *string_toupper - change all lowercase characters to uppercase
 *
 * @s: string
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
