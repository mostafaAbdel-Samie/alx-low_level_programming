#include "main.h"
/**
 * _strncat - a function that concatenaten tow
 *
 * @dest: pointer to destinon input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest arrsy*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null torminated
	 * if it contains n or more bytee
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
