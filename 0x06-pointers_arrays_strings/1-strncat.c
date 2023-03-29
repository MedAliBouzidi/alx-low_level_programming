#include "main.h"

/**
 * *_strncat - concatenates two strings with n bytes
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld, ls;

	ld = ls = 0;

	while (*(dest + ld))
		ld++;
	while (*(src + ls) && ls < n)
	{
		dest[ld + ls] = src[ls];
		ls++;
	}
	return (dest);
}
