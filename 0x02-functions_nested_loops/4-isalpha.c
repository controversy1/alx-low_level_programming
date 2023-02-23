#include "main.h"

/**
 * _isalpha - checks for alphabetic chracters
 * @c: character to be checked
 * Return: 1 foralphabetic character 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
