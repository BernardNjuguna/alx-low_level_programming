#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first input
 * @s2: second input
 * Return: NULL if string is empty
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_result;
	int a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	concat_result = malloc(sizeof(char) * (a + b + 1));
	if (concat_result == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	while (s1[a] != '\0')
	{
		concat_result[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		concat_result[a] = s2[b];
		a++, b++;
	}
	concat_result[a] = '\0';
	return (concat_result);
}
