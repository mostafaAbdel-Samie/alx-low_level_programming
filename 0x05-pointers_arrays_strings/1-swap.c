#include "main.h"
/**
 * swap_int - swap the
 *
 * @a: input paramter 1
 * @b: input paramter 2
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
