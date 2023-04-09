#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int get_change(int cents);
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
	int cents, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(*++argv);
	if (cents < 0)
		change = 0;
	else
		change = get_change(cents);
	printf("%d\n", change);
	return (0);
}

/**
 * get_change - get change from cents
 *
 * @cents: the amount of money to get change from
 *
 * Return: number of change coins
 */
int get_change(int cents)
{
	if (cents == 1)
		return (1);
	if (cents >= 25)
		return (1 + get_change(cents - 25));
	if (cents >= 10)
		return (1 + get_change(cents - 10));
	if (cents >= 5)
		return (1 + get_change(cents - 5));
	if (cents >= 2)
		return (1 + get_change(cents - 2));
	return (0);
}
