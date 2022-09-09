#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints a random number and state whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("cd is +\n", n);
	else if (n < 0)
		printf("cd is -\n", n);
	else
		printf("cd is 0\n", n);
	return (0);
}
