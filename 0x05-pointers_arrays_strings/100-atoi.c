#include "main.hi"
/**
 * _atoi - nmvbdhsfv
 * @s: kdhcjdh
 * Return: nmbdschdgbc
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sing *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (nam * sing);
}