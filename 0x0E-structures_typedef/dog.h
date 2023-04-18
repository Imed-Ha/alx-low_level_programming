#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: structure defining attributes of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
