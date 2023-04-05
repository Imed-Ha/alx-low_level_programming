/**
 * factorial - returns the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
