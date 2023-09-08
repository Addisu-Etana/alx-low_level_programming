#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is a main function for c program
 * Return: always 0
 */

/* header file on the above */

/* betty doc on the below section */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
