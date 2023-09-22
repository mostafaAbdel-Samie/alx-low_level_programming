#include <unistd.h>
/**
 * _putchar - write the char print 
 * @c: the charactar 
 * Return: chart prent 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
