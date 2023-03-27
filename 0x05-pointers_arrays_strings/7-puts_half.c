#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;

	if (len % 2 != 0)
		len++;

	for (i = len / 2; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
