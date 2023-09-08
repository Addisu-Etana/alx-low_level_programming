#include <stdio.h>
/**
  * main- Write a program that prints the alphabet in lowercase.
  * Return: eachtime 0
  */
int main(void)
{
	char i;
for (i = 'a'; i <= 'z' ; i++)
{
if (i != 'e' && i != 'q')
putchar(i);
}
putchar('\n');
return (0);
}
