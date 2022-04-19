#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * At a: first integer.
 * At b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
