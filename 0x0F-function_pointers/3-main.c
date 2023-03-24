#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Print the results of simple operations
 * @argc: The numberr of arguments supplied to the program.
 * @argv: An array of pointers to the arguemnts.
 * Return: Always 0
 */
int main(int__attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (arg != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) ||
			(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		extit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}