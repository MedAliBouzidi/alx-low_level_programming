#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to reallocates
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 *
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
			*(p + i) = ((char *)ptr)[i], i++;
		free(ptr);
		return (p);
	}
	while (i < new_size)
		*(p + i) = ((char *)ptr)[i], i++;
	free(ptr);
	return (p);
}
