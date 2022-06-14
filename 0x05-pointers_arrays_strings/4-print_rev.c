#include "main.h"

/**
 * print_rev - check the code
 * @s: parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len;
	
	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
