#include "main.h"

/**
 * _strncat - function to concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * @n: function parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
		dest_len++;
	for (y = 0; src[y] != '\0'; y++)
		src_len++;
	for (y = 0; y < n; y++)
		dest[dest_len + y] = src[y];
	return (dest);
}
