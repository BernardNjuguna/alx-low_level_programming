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
	int a = 0;
	int src_cpy = 0;

	while (src[a++])
		src_cpy++;
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];
	for (a = src_cpy; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
