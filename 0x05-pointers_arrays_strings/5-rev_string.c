#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: function parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char n;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		n = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = n;
	}
}
