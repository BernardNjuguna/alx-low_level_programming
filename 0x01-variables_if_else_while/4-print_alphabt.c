#include <stdio.h>

/**
 * main - function that exclude some letters
 *
 * Return: always 0
 */

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		if (b != 'q' && b != 'e')
		putchar(b);
	putchar('\n');
	return (0);
}
