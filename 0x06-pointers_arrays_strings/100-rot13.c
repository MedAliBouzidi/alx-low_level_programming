#include "main.h"

/**
 * *rot13 - encode a string using rot13
 *
 * @s: given string
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char *s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *s2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i))
	{
		j = 0;
		while (*(s1 + j))
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
