#include "main.h"

/**
 * print_alphabet_x10 - this function prints then times lower case alphabets
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 10;

	while (n < 10)
	{
		ch = 'a'
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar(ch);
	return (0);
}
