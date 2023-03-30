#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: A pointer to the changed string
 */
char *cap_string(char *)
{
	char *ret = s;

	if (_islower(*s) && member(*(s - 1), SEPARATORS))
		*s++ += 'A' - 'a';
	if (_islower(*s))
		*s += 'A' - 'a';
	while (*++s)
		if (_islower(*s) && member(*(s - 1), SEPARATORS))
			*s += 'A' - 'a';
	return (ret);
}
