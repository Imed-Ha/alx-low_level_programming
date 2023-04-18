#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: a pointer to a char, name of the dog
 * @age: age of the dog
 * @owner: a pointer to a char, owner of the dog
 *
 * Description: a dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
