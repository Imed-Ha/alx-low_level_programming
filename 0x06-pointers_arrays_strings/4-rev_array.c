#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers to reverse
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
 		a[n - i - 1] = tmp;
	}
}
