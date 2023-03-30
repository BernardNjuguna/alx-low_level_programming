#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: function parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
