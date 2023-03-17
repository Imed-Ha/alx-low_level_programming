#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * in ascending order, separated by commas and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0'); /* convert num to ASCII character */
		if (num != 9)
		{
			putchar(','); /* print comma */
			putchar(' '); /* print space */
		}
	}
	putchar('\n'); /* print new line */

	return (0);
}
