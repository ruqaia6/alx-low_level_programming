#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *            using two output parameters
 *
 *@a: input parameter 1
 *@b: input parameter 2
 *
 * Return : Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

