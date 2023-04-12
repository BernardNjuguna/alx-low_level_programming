#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input parametre
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int x = 0;
	int y = 1;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		y++;
	}
	b = malloc(sizeof(char) * (y + 1));
	if (b == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
		b[x] = str[x];
	return (b);
}
