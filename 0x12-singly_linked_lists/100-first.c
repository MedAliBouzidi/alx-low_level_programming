#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a message before the main function is executed
 *
 * Return: Nothing
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
