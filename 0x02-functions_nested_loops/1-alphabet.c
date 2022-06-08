#include "main.h"

/**
 * print_alphabet -this function lower case alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int n;

	n = 1;

	while (n < 26)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
