#include "main.h"
/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int ix;

	for (ix = 0; s[ix] >= '\0' ; ix++)
	{
		if (s[ix] == c)
		{
			return (s + ix);
		}
	}
	return ('\0');
}
