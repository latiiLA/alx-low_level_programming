#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - check the code
 * 
 * @dest: parameter 1
 * @src: parameter 2
 * @n: paramenter 3
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
}
