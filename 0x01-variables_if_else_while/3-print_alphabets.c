#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase,
 *              then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* print lowercase alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);

    /* print uppercase alphabet */
    for (letter = 'A'; letter <= 'Z'; letter++)
        putchar(letter);

    /* print new line */
    putchar('\n');

    return (0);
}
