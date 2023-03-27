#include "main.h"

/**
 * rev_string - reverse a given string
 *
 * @s: pointer to string
 */
void rev_string(char *s)
{
	char tmp;
	int l = 0, i = 0;

	while (s[i++])
		l++;
	i = l - 1;
	while (i >= l / 2)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
		i--;
	}
}
