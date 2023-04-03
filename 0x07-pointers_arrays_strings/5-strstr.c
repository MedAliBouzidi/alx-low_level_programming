#include "main.h"

/**
 * *_strstr - locates a substring
 *
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(haystack + i))
	{
		j = 0;
		while (*(needle + j))
		{
			if (*(needle + j) == *(haystack + i + j))
				j++;
			else
				break;
		}
		if (!*(needle + j))
			return (haystack + i);
		i++;
	}
	return ('\0');
}
