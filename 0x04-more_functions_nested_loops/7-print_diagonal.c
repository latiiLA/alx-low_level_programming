#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			int j = i;
			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
