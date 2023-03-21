#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*  DOG_H */
