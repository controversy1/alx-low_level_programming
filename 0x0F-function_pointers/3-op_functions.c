#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: The first number.
 * @b: The second number
 *
 * Return: the sum of aand b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the products of two numbers
 * @a: The first numbers.
 * @b: The second.
 *
 * Return: Th eproduct of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the multiplication of two numbers
 * @a: The first number.
 * @b: the second number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of two numbers.
 * @a: the first number.
 * @b: the second number.
 * Return: the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the divion of the two numbetrs
 * @a: the first number
 * @b: the second numbetr
 * Return: the quotient of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
