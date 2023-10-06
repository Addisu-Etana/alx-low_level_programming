#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str);
void error_exit(void);
/**
 * main - Multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		error_exit();
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		error_exit();
	}
	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
/**
 * is_digit - Checks if a string is a digit.
 * @str: String to check.
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * error_exit - Prints an error message and exits with a status of 98.
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

