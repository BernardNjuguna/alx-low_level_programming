#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: null if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x = 0, y = 0, sl1 = 0, sl2 = 0;

	while (s1 && s1[sl1])
		sl1++;
	while (s2 && s2[sl2])
		sl2++;
	if (n < sl1)
		a = malloc(sizeof(char) * (sl1 + n + 1));
	else
		a = malloc(sizeof(char) * (sl1 + sl2 + 1));
	if (!a)
		return (NULL);
	while (x < sl1)
	{
		a[x] = s1[x];
		x++;
	}
	while (n < sl2 && x < (sl1 + sl2))
		a[x++] = s2[y++];
	while (n > sl2 && x < (sl1 + sl2))
		a[x++] = s2[y++];
	a[x] = '\0';
	return (a);
}
