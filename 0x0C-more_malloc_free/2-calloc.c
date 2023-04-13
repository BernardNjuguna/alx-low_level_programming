#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the array
 * @size: size of the array
 * Return: pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	int a = 0, b = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	k = malloc(size * nmemb);
	if (k == NULL)
	{
		return (NULL);
	}
	while (a <= b)
	{
		k[a] = 0;
		a++;
	}
	return (k);
}
