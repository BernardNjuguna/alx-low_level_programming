#include "main.h"

/**
 * print_alphabet_x10 - function to print 10x the alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
	}
}
