#include "main.h"

/**
 * _isalpha - prints lowercase or uppercase
 *
 * @c: printed parameter
 *
 * Return: 1 if letter is lowercase or uppercase
 * otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
