#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints aan arrry of chars
 * @size: size of the array
 * @c: input parameter
 * Return: if size is 0, return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
