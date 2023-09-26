#include "main.h"
/**
 * *_strpbrk - search a string for any of a sat of bytes.
 * @s: string.
 * @accept: string to match
 * Return: pointer to the byte in s that
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
