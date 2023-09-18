#include "main.h"
/**
  * print_rev - reverse the string
  *
  *@s: string
  *Return: eachtime 0
  */
void print_rev(char *s)
{
	int a = 0;
	int i;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (i = a; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
