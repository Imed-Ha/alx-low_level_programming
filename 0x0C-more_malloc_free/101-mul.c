#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return isdigit(c);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Returof string, or -1 if s contains non-digit characters
 */
int _atoi(char *s)
{
	int result = 0;

	while (*s)
	{
		if (!_isdigit(*s))
			return -1;
		result = result * 10 + (*s - '0');
		s++;
	}

	return result;
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 if successful, 98 if incorrect number of arguments or non-digit characters
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == -1 || num2 == -1)
	{
		printf("Error\n");
		return 98;
	}

	result = num1 * num2;

	printf("%d\n", result);

	return 0;
}

