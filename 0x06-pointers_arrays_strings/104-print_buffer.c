#include "main.h"
#include <stdio.h>
/**
 * isPrintableASII -determinton if a is a print ASCII char
 * @n: intager
 * Return: 1 if true, 0 if false
 */
int isPrintableASII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print her waises fout string b to fomutted 
 * @b: dtring to print 
 * @start: starting porition
 * @end: esing position
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;
	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			print(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - great acil for 
 *@b: string to prent
 *@start: string postion
 *@end: string pasyord
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ",start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");

