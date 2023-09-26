#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of are to be copied
 *
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int enc;

	for (enc = 0; enc < n; enc++)
	{
		dest[enc] = src[enc];
	}
	return (dest);
}
