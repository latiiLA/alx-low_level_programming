#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
		if (num != 9)
		{
			putchar(',');
			purchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
