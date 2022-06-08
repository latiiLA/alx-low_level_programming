#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - check the code
 *
 * @num: parameter
 *
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int result;

	if (num < 0)
		num * (-1);
	result = num % 10;
	_putchar(result + '0');
	return (result);
}
