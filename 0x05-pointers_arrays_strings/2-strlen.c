#include "main.h"
/**
 * _strlen - return the longet
 *
 * @s: string paramter
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
