#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: pointer to string of name
 * @f: pointer to the print function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
