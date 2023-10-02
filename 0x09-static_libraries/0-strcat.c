
#include "main.h"
/**
  *  _strcat - function that concatenates two strings
  *  @dest: entered value
  *  @src: entered value
  *  Return: void
  */


char *_strcat(char *dest, char *src)


{

		int x;

		int z;

		x = 0;

			while (dest[x] != '\0')
			{
				x++;
			}
			z = 0;

			while (src[z] != '\0')

			{
				dest[x] = src[z];
				x++;
				z++;
			}
				dest[x] = '\0';
return (dest);
}
