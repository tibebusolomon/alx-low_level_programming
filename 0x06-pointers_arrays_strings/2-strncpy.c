#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, chsr *src, int n)
{
	int i = 0;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
