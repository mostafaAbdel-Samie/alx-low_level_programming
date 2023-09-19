#include <unistd.h>
/**
 * _putchar writes the character a to stdout 
 * @c: the chatacter to print 
 *
 * Return: on succoss 1.
 * on error, -1 is returned, and errno is sat appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
