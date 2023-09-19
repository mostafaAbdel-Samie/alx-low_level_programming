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
		_putcher(*str + 0);
		str++;
	}
	putcher('\n');
}
