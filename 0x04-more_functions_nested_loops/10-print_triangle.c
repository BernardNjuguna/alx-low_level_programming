#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b, c;

		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b++)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

