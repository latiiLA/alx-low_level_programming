#include "main.h"

/**
 * *_strncat - check the code
 *
 * @dest: first parameter
 * @src: second parameter
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
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
