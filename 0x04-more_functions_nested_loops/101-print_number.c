#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('_');
	}
	i /= 10;
	print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
