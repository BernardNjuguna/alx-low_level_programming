#include "main.h"

/**
 * swap_int - a function that swaps value of two integers
 * @a: first value
 * @b: second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
