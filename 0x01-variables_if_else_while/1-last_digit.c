#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of a randomly generated number
 * and whether it is graeter than 5, less than 6, or 0.
 *
 * Return: Alweays 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and it is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and it is less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and it is 0\n",
				n, n % 10);
	}
	return (0);
}
