#include <stdio.h>

/**
 * main - funtion to print alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
