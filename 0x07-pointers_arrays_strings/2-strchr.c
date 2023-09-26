#include "main.h"
/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int arr;

	for (arr = 0; s[arr] > '\0' ; arr++)
	{
		if (s[arr] == c)
		{
			return (s + arr);
		}
	}
	return ('\0');
}
