#include "main.h"

/**
 * print_most_numbers - check the code
 * 
 * @void: no return value
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		if (num != 2 || num != 4)
			_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
