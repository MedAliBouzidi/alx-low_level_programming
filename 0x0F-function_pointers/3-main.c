#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, b, (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(*(argv + 2));
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));

	printf("%d\n", op_func(a, b));

	exit(EXIT_SUCCESS);
}
