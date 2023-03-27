#include <stdio.h>

/**
 * main - Print the alphabets
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrtsuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar("\n");
	return (0);

}
