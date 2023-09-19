#include "main.h"
/**
 * rev_string - sljxkchsljh
 *
 * @s: jsxjs
 *
 * Return: noul
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string ldigth*/
	for (l = 0; s[l] != '\n'; ++l)
		;

	/*swap tne string bay looping*/
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
