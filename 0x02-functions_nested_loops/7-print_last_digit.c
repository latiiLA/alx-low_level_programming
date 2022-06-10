#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - check the code
 *
 * @num: parameter
 *
 * Description: print  the last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;

	if (result < 0)
	{
		result *= -1;
	}

	_putchar(result + '0');
	return (result);
}
