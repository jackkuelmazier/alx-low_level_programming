#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type
 * @name: the dog name
 * @age: the age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
