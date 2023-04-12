#include "main.h"
#include <stdlib.h>

int get_words_count(char *str, int i);

/**
 * **strtow - splits a string into words.
 *
 * @str: given string
 *
 * Return: pointer to array of string
 */
char **strtow(char *str)
{
	int wc, i, j, s, e, c;
	char **w;

	if (str == NULL || *str == 0)
		return (NULL);
	wc = get_words_count(str, 0);
	if (wc == 0)
		return (NULL);

	w = malloc(sizeof(char *) * (wc + 1));
	if (w == NULL)
		return (NULL);

	i = c = 0;
	s = e = -1;
	while (*(str + i))
	{
		if (*(str + i) != 32 && s == -1)
			s = i;
		if (*(str + i) != 32 && (*(str + i + 1) == 32 || !*(str + i + 1)))
			e = i;
		if (s != -1 && e != -1)
		{
			*(w + c) = malloc(sizeof(char) * (e - s + 2));
			if (*(w + c) == NULL)
				return (NULL);
			j = 0;
			while (s <= e)
				*(*(w + c) + j++) = *(str + s++);
			*(*(w + c++) + j) = '\0';
			s = -1;
			e = -1;
		}
		i++;
	}
	*(w + c) = NULL;
	return (w);
}

/**
 * get_words_count - get words count on str
 *
 * @str: pointer to string
 * @i: current index
 *
 * Return: number of words
 */
int get_words_count(char *str, int i)
{
	if (!*(str + i))
		return (0);
	if (*(str + i) != 32 && *(str + i + 1) == 32 && !*(str + i + 1))
		return (1 + get_words_count(str, ++i));
	return (get_words_count(str, ++i));
}
