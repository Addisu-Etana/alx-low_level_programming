#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);

	}
	_putchar('\n');

}

