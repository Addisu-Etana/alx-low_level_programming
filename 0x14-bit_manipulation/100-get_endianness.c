#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;

	char *x;

	i = 1;
	x = (char *)&i;
	return (*x);
}

