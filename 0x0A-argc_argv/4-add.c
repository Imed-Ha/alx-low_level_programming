#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed only of digits
 * @s: the string to be checked
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: 0 if the program runs successfully, 1 otherwise
 */
int main(int argc, char **argv)
{
    int i, sum = 0;

    for (i = 1; i < argc; i++)
    {
        if (!is_digit(argv[i]))
        {
            printf("Error\n");
            return (1);
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return (0);
}
