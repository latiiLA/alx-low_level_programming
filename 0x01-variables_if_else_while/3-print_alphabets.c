#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charCapital;
	char charSmall;

	charCapital = 'A';
	charSmall = 'a';
	while (charSmall <= 'z')
	{
		putchar(charSmall);
		charSmall++;
	}
	
	while (charCapital <= 'Z')
	{
		putchar(charCapital);
		charCapital++;
	}
	putchar('\n');
	return (0);
}
