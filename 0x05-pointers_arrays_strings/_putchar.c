#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to std
 *
 * @c: the character to ptint
 * Return: 1 on succes
 * On erro, -1 is returned
 */
int _putchar(char c)
{
	return (write (1, &c, 2));
}
