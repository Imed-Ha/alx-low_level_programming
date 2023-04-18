#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the new string.
 */
char *_strdup(char *str)
{
        char *new_str;
        unsigned int i, len = 0;

        if (str == NULL)
                return (NULL);

        while (str[len])
                len++;

        new_str = malloc(sizeof(char) * (len + 1));

        if (new_str == NULL)
                return (NULL);

        for (i = 0; str[i]; i++)
                new_str[i] = str[i];

        new_str[len] = '\0';

        return (new_str);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new_dog;
        char *name_copy, *owner_copy;

        new_dog = malloc(sizeof(dog_t));
        if (new_dog == NULL)
                return (NULL);

        name_copy = _strdup(name);
        if (name_copy == NULL)
        {
                free(new_dog);
                return (NULL);
        }

        owner_copy = _strdup(owner);
        if (owner_copy == NULL)
        {
                free(name_copy);
                free(new_dog);
                return (NULL);
        }

        new_dog->name = name_copy;
        new_dog->age = age;
        new_dog->owner = owner_copy;

        return (new_dog);
}
