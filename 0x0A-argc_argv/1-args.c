#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of command line arguments
 * @argv: an array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
