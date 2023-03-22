#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: printed parameter
 *
 * Return: 1 if n is greater than zero
 * 0 if n is zero
 * and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
