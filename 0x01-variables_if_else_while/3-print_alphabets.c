#include <stdio.h>

int main()
{
    char ch;

    printf("Alphabets in lowercase:\n");
    for(ch = 'a'; ch <= 'z'; ++ch)
    {
        putchar(ch);
        printf(" ");
    }

    printf("\nAlphabets in uppercase:\n");
    for(ch = 'A'; ch <= 'Z'; ++ch)
    {
        putchar(ch);
        printf(" ");
    }

    return 0;
}
