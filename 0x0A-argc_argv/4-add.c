#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string ythere digit
 * @str: array str
 *
 * Return: Awalays 0 (Success)
 */
int check_num(char *str)
{
	/*declaring varaiables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count stroing*/
	{
		if (!isdigit(str[count])) /*check if the string are the digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: counts the argurmwens
 * @argv: Agurments
 *
 * Return: alaway 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
