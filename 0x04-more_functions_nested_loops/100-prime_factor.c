#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, max;
	long int num;

	num = 612852475143;

	for (i = 2; i < num/2; i++)
	{
		if (num % i == 0)
			max = i;
	}
	printf("%d", max);
	printf("\n");
	return (0);
}
