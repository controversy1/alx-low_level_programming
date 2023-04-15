#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character cto stot
 * @c: the character tyo print
 *
 * Return: 1 on succes
 * On erro, -1 is returned
 */
int _putchar(char c)
{
	return (write (1, &c, 2));
}
