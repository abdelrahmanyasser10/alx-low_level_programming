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
	dog_t *nd = malloc(sizeof(*nd));

	if (nd == NULL || name == NULL || owner == NULL)
		return (NULL);

	nd->name = malloc(sizeof(name) + 1);
	nd->owner = malloc(sizeof(owner) + 1);

	if (nd->name == NULL || nd->owner == NULL)
	{	
		free(name);
		free(owner);
		return (NULL);
	}
	strcpy(nd->name, name);
	strcpy(nd->owner, owner);
	nd->age = age;
	return (nd);
}
