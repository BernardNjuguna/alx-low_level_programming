#include "main.h"

/**
 * _puts - a function that prints a string to stdout
 * @str: string to be printed
 * Return: 0
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
