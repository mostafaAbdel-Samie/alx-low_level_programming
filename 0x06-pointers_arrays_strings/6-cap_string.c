#include "main.h"
#include <stdio.h>
/**
 * isLower - deternines whether ascil is lowercase
 * @c: charecte r
 * Return: 1 if troe, 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDlimiter - determined whethar ascil is a deloniter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDlimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capities ali words of a string
 * @s: input string
 * Return: string with capitalired werde
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimi = 0;
		s++;
	}
	return (ptr);
}
