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
	int *temp;

	temp = b;
	b = a;
	a = temp;
}
