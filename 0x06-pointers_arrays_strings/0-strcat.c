#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move pointer to the end of dest string */
	while (*ptr != '\0')
		ptr++;

	/* Append src string to dest string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add null byte at the end of dest string */
	*ptr = '\0';

	return (dest);
}
