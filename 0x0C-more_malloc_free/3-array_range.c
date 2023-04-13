#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest input
 * @max: highest figure
 * Return: NULL IF min > max
 */

int *array_range(int min, int max)
{
	int *r;
	int i;

	if (min > max)
		return (NULL);
	r = malloc(sizeof(int) * (max - min + 1));
	if  (r == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		r[i] = min++;
	return (r);
}

