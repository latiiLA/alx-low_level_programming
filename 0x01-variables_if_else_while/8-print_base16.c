#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexa1;
	char hexa2;

	hexa1 = 0;
	hexa2 = 'a';

	while (hexa1 < 10)
	{
		putchar(hexa1 + '0');
		hexa1++;
	}
	while (hexa2 < 'g')
	{
		putchar(hexa2);
		hexa2++;
	}
	putchar('\n');
	return (0);
}
