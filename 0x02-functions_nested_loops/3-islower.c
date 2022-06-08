#include "main.h"

/**
 * _islower - checks for lowerchase character
 *
 * c - parameter for function _islower
 *
 * Return: Always 0 if not alphabet else return 1.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
