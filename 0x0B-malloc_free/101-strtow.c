#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words in str.
 */
static int count_words(char *str)
{
	int words = 0, i, len = 0;

	for (i = 0; str[i]; ++i)
	{
		if (str[i] != ' ')
		{
			++len;
			if (str[i + 1] == ' ' || !str[i + 1])
			{
				++words;
				len = 0;
			}
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 *         Each element of thistain a single word, null-terminated.
 *         The last element of the returned array should be NULL.
 *         Returns NULL if str == NULL or str == "".
 *         If your function fails, it should return NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = count_words(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < wc; ++i, j += len + 1)
	{
		while (str[j] == ' ')
			++j;

		for (len = 0; str[j + len] && str[j + len] != ' '; ++len)
			;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; ++k)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; ++k)
			words[i][k] = str[j + k];
		words[i][len] = '\0';
	}

	words[wc] = NULL;
	return (words);
}

