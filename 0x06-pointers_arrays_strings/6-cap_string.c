#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 *
 * @c: the character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char *separators = " \t\n,;.!?\"(){}";

	while (*separators)
	{
		if (c == *separators++)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to capitalize
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	char *p = str;

	while (*p)
	{
		/* capitalize first letter of each word */
		if ((*p >= 'a' && *p <= 'z') && (p == str || is_separator(*(p - 1))))
		{
			*p -= 'a' - 'A';
		}
		p++;
	}

	return (str);
}
