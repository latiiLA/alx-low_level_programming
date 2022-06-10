#include "main.h"

/**
 * print_square - check the code
 *
 * @size: first parameter
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	if (size <= 0)
		_putchar('\n');
	else
	{
		int j;
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
