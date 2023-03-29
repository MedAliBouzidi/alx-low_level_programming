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
	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;

	while (*(s + i + 1))
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			j = 0;
			while (*(sep + j))
			{
				if (s[i] == sep[j])
					s[i + 1] -= 32;
				j++;
			}
		}
		i++;
	}
	return (s);
}
