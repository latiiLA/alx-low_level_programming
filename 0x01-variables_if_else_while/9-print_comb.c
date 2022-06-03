#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int hexa;
	
	num = 0;
	hexa = 65;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
		putchar(',');
	}
	while (hexa < 70)
	{
		putchar(char(hexa) + '0');
		hexa++;
	}
	putchar('\n');
	return (0);
}
