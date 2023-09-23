#include "main.h"
/**
 * rout13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */
char *rout13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwyzABCDEFGHIJKLMNOPQRSTUVWYZ";
	char ROT13[] = "nopqrstuvwyzabcdefghijklmNOPQRSTUVWYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}