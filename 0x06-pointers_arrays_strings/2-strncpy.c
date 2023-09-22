#include "main.h"
/**
 * _strncpy - the funchion that copies a string
 *
 * @dest: pointer to destination input buffet
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * interate through src arrey
	 * where if ther is no nuli byte
	 * anong the first n bytest of source
	 * the string placed placod in dest will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the ieth of source is less then a
	 * write additionl nullbytes to dest to
	 * ensure thet a total of a bytes is writton
	 */
	while (i < n)
	{
		dest[i] ='\0';
		i++;
	}
	return (dest);
}
