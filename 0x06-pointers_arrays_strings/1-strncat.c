#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *
 * @dest: first paramenter
 * @src: second paramenter
 * @n: third parameter
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int total;

	while (dest[i] != '\0')
	{
		i++;
	}

	total = i + n;

	while (src[j] != 0 && i < total)
	{
		dest[i] = *src;
		src++;
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
