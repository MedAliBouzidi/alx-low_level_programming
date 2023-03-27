#include "main.h"

/**
 * reset_to_98 - update the value of int through pointer
 *
 * @n: pointer to int
 */
void reset_to_98(int *n)
{
	if (*n != 98)
		*n = 98;
}
