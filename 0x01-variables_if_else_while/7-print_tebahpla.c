#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerchar;

	lowerchar = 'z';
	while (lowerchar >= 'a')
	{
		putchar(lowerchar);
		lowerchar--;
	}
	putchar('\n');
	return (0);
}
