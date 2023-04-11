#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 *
 * @ac: arguments count
 * @av: arguments
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = j = 0;
	while (*(av + j))
	{
		i = 0;
		while (*(*(av + j) + i))
			size++, i++;
		size++, j++;
	}
	size++;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	i = k = 0;
	while (i < ac)
	{
		j = 0;
		while (*(*(av + i) + j))
			*(s + k++) = *(*(av + i) + j++);
		*(s + k++) = '\n';
		i++;
	}

	return (s);
}
