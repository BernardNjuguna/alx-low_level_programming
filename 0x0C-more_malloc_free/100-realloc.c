#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size allocated space for ptr
 * @new_size: size of new memory block
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b;


	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);

		return (a);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		for (b = 0; b < old_size && b < new_size; b++)
		{
			a[b] = ((char *) ptr)[b];
		}
		free(ptr);
		return (a);
}
