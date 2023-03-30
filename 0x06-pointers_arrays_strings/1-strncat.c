/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: string to append to
 * @src: string to append from
 * @n: maximum number of bytes to append from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len])
		dest_len++;

	while (src[i] && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
