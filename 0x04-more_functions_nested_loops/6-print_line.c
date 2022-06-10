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
	
	num = n;
	while (num <= n)
	{
		if (num <= 0)
		{
			_putchar('\n');
			break;
		}
		else
			_putchar('-');
		num--;
	}
	_putchar('\n');
}
