#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, num;
	long int max;

	num = 612852475143;

	while (num > 1)
	{
		while(num % i == 0)
		{
			max = i;
			num = num / i;
		}
		i += 1;
	}
	printf("%ld\n", max);
	return (0);
}
