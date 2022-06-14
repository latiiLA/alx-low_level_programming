#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 *
 * @s: pointer parameter
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	char arr = *s;

	int count;

	count = 0;

	while (arr != '\0')
	{
		count++;
	}
	return (count);
}
