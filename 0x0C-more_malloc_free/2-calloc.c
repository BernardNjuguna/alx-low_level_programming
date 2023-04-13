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
	char *array_;
	int a = 0, b = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array_ = malloc(size * nmemb);
	if (array_ == NULL)
	{
		return (NULL);
	}
	while (a < b)
	{
		array_[a] = 0;
		a++;
	}
	return (array_);
}
