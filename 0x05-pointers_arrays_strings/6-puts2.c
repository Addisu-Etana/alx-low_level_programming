#include "main.h"
/**
  * puts2 - function should prints every other character of a string
  *
  *@str: input
  * Return: always 0
  */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (x = 0; x <= b; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
