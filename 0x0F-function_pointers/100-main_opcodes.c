#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *opc;
	int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(*(argv + 1));

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opc = (char *) main;
	i = 0;
	while (i < nb)
	{
		printf("%02x", *(opc + i) & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}
	putchar('\n');

	return (0);
}
