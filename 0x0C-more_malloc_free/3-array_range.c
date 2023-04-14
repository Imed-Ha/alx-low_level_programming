#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value to store in the array
 * @max: the maximum value to store in the array
 *
 * Return: pointer to the newly created array, NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
