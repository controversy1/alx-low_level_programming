#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for bif, 1 for litl
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
