#include "main.h"
/**
 * *_memset - fills nemot with a constant byte
 * @s: pointer to put the conant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int arr;

	for (arr = 0; n > 0; arr++, n--)
	{
		s[arr] = b;
	}
	return (s);
}
