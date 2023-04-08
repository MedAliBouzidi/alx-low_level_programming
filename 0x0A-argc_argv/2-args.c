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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
