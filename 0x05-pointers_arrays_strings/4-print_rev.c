#include "main.h"
/**
 * print_rev - prent reviter
 * @s: puinter to the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
