#include "main.h"

/**
 * *_strcpy - copy a string to another string
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, l = 0;

	while (*(src + l))
		l++;

	for (; i < l; i++)
		dest[i] = src[i];
	dest[l] = '\0';

	return (dest);
}
