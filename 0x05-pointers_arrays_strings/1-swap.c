#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to interger to be swapped
 * @b: pointer to interger to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

