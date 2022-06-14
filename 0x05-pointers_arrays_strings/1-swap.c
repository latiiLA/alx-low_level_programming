#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a: first paramenter
 * @b: second parameter
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;
	int x = *a;
	int y = *b;

	temp = x;
	x = y;
	y = temp;

	*a = x;
	*b = y;
}
