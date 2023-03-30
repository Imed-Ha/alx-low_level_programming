/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string to compare
 * @s2: pointer to the second string to compare
 *
 * Return: 0 if s1 and s2 are equal, negative value if s1 is less than s2,
 *         or positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
