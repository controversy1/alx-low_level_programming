#include "main.h"
/**
 * _strpbrk - Entry point
 * _strpbk: value
 * @s: input
 * @accept: input
 * Return:
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
