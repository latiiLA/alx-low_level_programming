#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * positive_or_negative - Entry point
 *
 * Return: ALways 0 (Success)
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
