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
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
