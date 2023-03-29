#include "main.h"

/**
 * *_strncpy - copy at most n bytes of string src
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
