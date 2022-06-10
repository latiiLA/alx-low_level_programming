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

	while (num > 1)
	{
		while(num % i == 0)
		{
			max = i;
			num = num / i;
		}
		i += 1;
	}
	printf("%d\n", max);
	return (0);
}
