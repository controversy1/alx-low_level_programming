#include <stdio.h>
#include "main.h"

/**
 * main - print the number of argumrents passed on the program
 * @argc: number of arguments
 * @argv: array agurments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
