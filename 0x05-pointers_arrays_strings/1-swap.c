#include "main.h"
/**
  * swap_int - swap the value of 2 integer
  *
  *@a: integer to swap
  *@b: integer to swap
  */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
