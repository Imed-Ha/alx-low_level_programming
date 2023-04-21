#include <stdio.h>
#include <stdarg.h>

/**
 * struct type - A structure to match a type with a print function.
 *
 * @t: The type.
 * @f: The function to print a type t variable.
 */
typedef struct type
{
    char t;
    void (*f)(va_list);
} type_t;

/* Function prototypes */
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);

/**
 * print_char - Prints a char variable.
 *
 * @valist: A va_list of arguments.
 */
void print_char(va_list valist)
{
    printf("%c", va_arg(valist, int));
}

/**
 * print_int - Prints an int variable.
 *
 * @valist: A va_list of arguments.
 */
void print_int(va_list valist)
{
    printf("%d", va_arg(valist, int));
}

/**
 * print_float - Prints a float variable.
 *
 * @valist: A va_list of arguments.
 */
void print_float(va_list valist)
{
    printf("%f", va_arg(valist, double));
}

/**
 * print_string - Prints a string variable.
 *
 * @valist: A va_list of arguments.
 */
void print_string(va_list valist)
{
    char *str = va_arg(valist, char *);

    if (str == NULL)
        str = "(nil)";

    printf("%s", str);
}

/**
 * print_all - Prints any number of arguments of different types.
 *
 * @format: A string of format characters representing the types of the arguments.
 *          c: char
 *          i: int
 *          f: float
 *          s: char *
 */
void print_all(const char * const format, ...)
{
    va_list valist;
    int i = 0, j;
    char *separator = "";

    type_t types[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {'\0', NULL}
    };

    va_start(valist, format);

    while (format && format[i])
    {
        j = 0;
        while (types[j].t)
        {
            if (types[j].t == format[i])
            {
                printf("%s", separator);
                types[j].f(valist);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }
    va_end(valist);

    printf("\n");
}

