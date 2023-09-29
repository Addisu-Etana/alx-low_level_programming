#include "main.h"
/**
  *
  * _puts_recursion - recursive function to print character
  * @s: input
  * Returns: eachtime 0
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
