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
		while (*(needle + j) && *(needle + j) != *(haystack + i))
			j++;
		if (*(needle + j) == *(haystack + i))
		{
			j = 0;
			while (*(haystack + i + j) && *(haystack + i + j) == *(needle + j))
				j++;
			if (!*(needle + j))
				return (haystack + i);
		}
		i++;
	}
	if (*(haystack + i) == *(needle + j))
		return (haystack +i);
	return ('\0');
}
