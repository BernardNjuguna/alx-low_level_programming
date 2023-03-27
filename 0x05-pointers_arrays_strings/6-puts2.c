#include "main.h"

/**
 * puts2 - prints string's characters starting form the first one
 * @str: function parameter
 * Return: 0
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
