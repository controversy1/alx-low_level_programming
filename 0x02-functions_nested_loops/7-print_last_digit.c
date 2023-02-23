#include "main.h"

/**
 * Print_last_digit - prints the last digitt of a number
 * @n: number to betreated
 * Return: last value of number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + ')');
	return (last);
}
