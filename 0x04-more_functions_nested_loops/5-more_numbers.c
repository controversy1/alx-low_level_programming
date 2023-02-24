#include "main.h"

/**
 * more_numbers - prints 10 times he niumbers from 1 to 14
 * Return: since 10 timesd the niumber from 1 to 14
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; x <= 14; y++)
	{
		if (y > 9)
		{
			_putchar((y / 10) + '0');
		}
		_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
