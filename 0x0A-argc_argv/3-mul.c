#include "main.h"
#include <stdio.h>

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

	a = *(*(argv + 1)) - 48;
	b = *(*(argv + 2)) - 48;

	printf("%d\n", a * b);
	return (0);
}
