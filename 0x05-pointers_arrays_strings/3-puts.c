#include "main.h"
/**
 * _puts - print a string
 *
 * @str: string pramtest
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
