#include "main.h"

/**
 * *leet - encode a string into 1337
 *
 * @s: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	int letters[6] = {65, 69, 76, 79, 84};
	int rep[6] = {52, 51, 49, 48, 55};

	while (*(s + i))
	{
		j = 0;
		while (*(letters + j))
		{
			if (s[i] == letters[j] || s[i] == (letters[j] + 32))
				s[i] = rep[j];
			j++;
		}
		i++;
	}
	return (s);
}
