#include "main.h"

/**
 * print_line - check the code
 *
 * @n: parameter
 * Return: Always 0.
 */
void print_line(int n)
{
	int num;

	num = 0;
	while (num <= n)
	{
		_putchar('-');
		num++;
	}
	_putchar('\n');
}
