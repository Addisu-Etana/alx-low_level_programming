#include "main.h"

/**
  *print_line - prints straight line on terminal
  *@n: number of times the character '-'
  *Return: void
  */
	void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('-');
		_putchar('\n');
	}
}

