#include <stdlib.h>
#include <string.h>

/**
 * typedef - prints dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: nothing
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (!new_dog)
        return (NULL);

    new_dog->name = strdup(name);
    if (!new_dog->name)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->age = age;

    new_dog->owner = strdup(owner);
    if (!new_dog->owner)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    return (new_dog);
}
