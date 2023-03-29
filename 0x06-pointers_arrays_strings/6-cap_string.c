#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 *
 * @s: given string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0, j, sep[14] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 124};

	while (*(s + i))
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			j = 0;
			while (*(sep + j))
			{
				if (s[i - 1] == sep[j])
					s[i] -= 32;
				j++;
			}
		}
		i++;
	}
	return (s);
}
