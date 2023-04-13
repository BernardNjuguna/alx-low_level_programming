#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input parameter
 * Return: 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
	{
		exit (98);
	}
		return (k);
}
