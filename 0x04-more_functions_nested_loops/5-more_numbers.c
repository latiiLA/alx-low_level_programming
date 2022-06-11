#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int number, count;

	count = 1;

	while (count < 11)
	{
		number = 0;
		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number++;
		}
		_putchar('\n');
		count++;
	}
}
