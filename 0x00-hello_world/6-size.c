#include<stdio.h>
/**
  * main - this is main function
  * Return: always 0
*/
int main(void)
{
	print("size of a char: %lu byte(s)\n", sizeof(char));
	print("size of an int: %lu byte(s)\n", sizeof(int));
	print("size of a long int: %lu byte(s)\n", sizeof(long int));
	print("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	print("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}	
