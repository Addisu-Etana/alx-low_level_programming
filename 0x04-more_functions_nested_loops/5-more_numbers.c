#include "main.h"
/**
  * more_numbers - function prints 10 times the number
  * followed by a new line
  * Return: void
  */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 15; j++)
	{
		if (j >= 10)
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
	}
	_putchar('\n');
}
}
