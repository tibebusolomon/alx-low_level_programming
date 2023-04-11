#include <stdio.h>
#include "main.h"

/**
 * main - add two numbers.
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
