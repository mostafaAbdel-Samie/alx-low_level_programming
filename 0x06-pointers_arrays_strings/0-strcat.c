#include "main.h"
/**
 * _strcat - fancashan arre
 *
 * @dest: jkdhcbskhb
 * @src: asjgchjsdagbh hsjgdhsghas
 * Return: pointer resorse string @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	/* find the size of dest arrey*/
	while (dest[c])
		c++;

	/* intre ther each src arryvale without the Null*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c] while overiten*/
		dest[c++] = src[c2];
	return (dest);
}
