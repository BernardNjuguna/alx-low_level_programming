#include "main.h"

/**
 * _abs - a function that prints absolute value of an integer
 *
 * @n: output parameter
 *
 * Return: always n
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
