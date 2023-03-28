#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to string.
 *
 * Return: integer value of string.
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int res = 0;
    int found_digit = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s == '+')
            sign *= 1;
        else if (*s >= '0' && *s <= '9')
        {
            found_digit = 1;
            res = res * 10 + (*s - '0');
        }
        else if (found_digit) /* non-digit char after digit */
            break;

        ++s;
    }

    return (sign * res);
}
