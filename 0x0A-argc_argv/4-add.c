#include "main.h"
#include <stdio.h>

int _atoi(char *s);

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: return 1 if an argument contains symbols,
 * otherwise 0
 */
int main(int argc, char **argv)
{
	int sum = 0, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	argv++;
	while (--argc)
	{
		num = _atoi(*argv++);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
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
	int l, minus;
	unsigned int final;

	l = final = 0;
	minus = 1;
	while (*(s + l))
	{
		if (*(s + l) == '-')
			minus *= -1;
		if (*(s + l) >= 48 && *(s + l) <= 57)
		{
			final *= 10;
			final += (*(s + l) - 48);
		}
		else
			return (-1);
		l++;
	}

	return (final * minus);
}
