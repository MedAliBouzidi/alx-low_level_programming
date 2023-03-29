#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int ld, ls;

	ld = ls = 0;

	while (*(dest + ld))
		ld++;
	while (*(src + ls))
	{
		dest[ld + ls] = src[ls];
		ls++;
	}
	dest[ld + ls] = '\0';
	return (dest);
}
