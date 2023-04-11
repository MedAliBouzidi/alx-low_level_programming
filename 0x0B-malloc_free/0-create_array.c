#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 *  and initializes it with a specific char
 * 
 * @size: size of array
 * @c: initial char
 *
 * Return: pointer to array, or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;
	
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		*(a + i) = c;
		i++;
	}
	return (a);
}
