#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aCharacter;
	int anInteger;
	long aLong;
	long long aLongLong;
	float aFloat;

	printf("Size of a char: %d byte(s)\n", sizeof(aCharacter));
	printf("Size of an int: %d byte(s)\n", sizeof(anInteger));
	printf("Size of a long int: %d byte(s)\n", sizeof(aLong));
	printf("Size of a long long int: %d byte(s)\n", sizeof(aLongLong));
	printf("Size of a float: %d byte(s)\n", sizeof(aFloat));
	return (0);
}
