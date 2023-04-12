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
	int a = 0;
	int b = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0' )
		b++;
	concat_result = malloc(sizeof(char) * (a + b) + 1);
	if (concat_result == NULL)
	{
		return (NULL);
	}
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
