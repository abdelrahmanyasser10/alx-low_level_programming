#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * Return: a ptr to the structure and NULL if the fuction fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd = malloc(sizeof(dog_t));

	if (nd == NULL)
		return (NULL);

	nd->name = name;
	nd->age = age;
	nd->owner = owner;

	if (nd)
		return (nd);
	else
		return (NULL);
}
