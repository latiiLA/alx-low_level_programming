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
	putchar('\n');
	return (0);
}
