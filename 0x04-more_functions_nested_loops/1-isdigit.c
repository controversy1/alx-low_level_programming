#include "main.h"

/**
 * _isdigit - check is a character is a digit
 * @x: the digit to be checked
 * Return: 1 for character theat will be a digit or 0 for anything else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
