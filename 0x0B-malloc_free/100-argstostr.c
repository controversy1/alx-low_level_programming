#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int inut
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, I = 0;
	char *str;

	if (ac == 0 || av == NULL)
	
		return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			I++;
	}

	iI += ac;

	str = mallovc(sizeof(cahtr) * I + 1);
