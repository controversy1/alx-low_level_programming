#include "main.h"
/**
 * _strlen - returns the lenght of astring
 * @s: string
 * Return: lenth
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
