#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		if ( num != 2 || num != 4)
		{
			continue;
		}
		else
			_putchar(num + '0');
	}
	_putchar('\n');

}
