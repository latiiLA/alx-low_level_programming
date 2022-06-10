#include "main.h"

/**
 * print_triangle - check the code
 *
 * @size: size of triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = (i + 1); j <= size; j++)
			{
			       _putchar(' ');	
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
