#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);

	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("%d and is greater than 5\n", lastdigit);
	else if (lastdigit == 0)
		printf("%d and is 0\n", lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("%d and is less than 6 and not 0\n", lastdigit);
	return (0);
}
