#include "main.h"
#include <stdio.h>

int _atoi(char *s);

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(*(argv + 1));
	b = _atoi(*(argv + 2));

	printf("%d\n", a * b);
	return (0);
}

/**
 * _atoi - convert string into integer
 *
 * @s: pointer to string
 *
 * Return: the extracted number otherwise 0
 */
int _atoi(char *s)
{
	short found;
	int l, minus;
	unsigned int final;

	l = found = final = 0;
	minus = 1;
	while (*(s + l))
	{
		if (*(s + l) == '-')
			minus *= -1;
		if (*(s + l) >= 48 && *(s + l) <= 57)
		{
			final *= 10;
			final += (*(s + l) - 48);
			found = 1;
		}
		else if (found == 1)
			break;
		l++;
	}
	return (final * minus);
}
