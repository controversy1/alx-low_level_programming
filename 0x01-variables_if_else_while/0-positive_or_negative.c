#include <stdlib.h>
#include <time.h>
/**
 *main - main block
 *description: get random number and print the number
 * and if it positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%n is positive\n", n);
	else if (n < 0)
		printf("%n is negative\n", n);
	else
		printf("%n is zero\n", n);
	return (0);
}
