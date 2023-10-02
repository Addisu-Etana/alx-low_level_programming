#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int ax = 0;

	int b = 0;

	while (*(src + ax) != '\0')
	{
		ax++;
	}
	for ( ; b < ax ; b++)
	{
	dest[b] = src[b];
	}
	dest[ax] = '\0';
	return (dest);
}
