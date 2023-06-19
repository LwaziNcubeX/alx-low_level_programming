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

int main(void);

#endif /* DOG_H */
