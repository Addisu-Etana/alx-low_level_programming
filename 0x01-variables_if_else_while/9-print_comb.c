#include <stdio.h>
/**
  * main - main function
  * Return: eachtime 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}

