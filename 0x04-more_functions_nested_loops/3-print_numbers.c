#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
