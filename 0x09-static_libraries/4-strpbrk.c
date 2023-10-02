#include "main.h"
/**
  * _strpbrk - Entry point
  * @s: input
  * @accept: input
  * Return: Always 0 (Success)
  */

char *_strpbrk(char *s, char *accept)
{

	int km;

	while (*s)
	{
		for (km = 0; accept[km]; km++)
		{
			if (*s == accept[km])
			return (s);
		}
	s++;
	}
return ('\0');
}

