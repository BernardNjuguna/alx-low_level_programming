#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string to count length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
