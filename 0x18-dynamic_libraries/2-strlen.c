#include "main.h"
/**
  *_strlen -function that  return the length of a string
  *
  *@s: string of character
  *Return: length
  */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
