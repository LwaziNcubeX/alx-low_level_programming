#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info about the dog
 * @name: stores the name of the dog
 * @age: stores the age of the dog
 * @owner: stores the name of the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
