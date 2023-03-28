#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: function parameter
 * Return: 0
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int p = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == 45)
	{
		min *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
		isi = 1;
		p = (p * 10) + (s[a] - '0');
		a++;
	}
	if (isi == 1)
	{
		break;
	}
	a++;
	}
	p *= min;
	return (p);
}
