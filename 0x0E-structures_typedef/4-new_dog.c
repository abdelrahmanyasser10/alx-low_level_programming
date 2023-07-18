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
	int i;

	if (nd == NULL || name == NULL || owner == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(sizeof(name) + 1);
	nd->owner = malloc(sizeof(owner) + 1);

	if (nd->name == NULL || nd->owner == NULL)
	{
		free(name);
		free(owner);
		free(nd);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		nd->name[i] = name[i];
	nd->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		nd->owner[i] = owner[i];
	nd->owner[i] = '\0';

	nd->age = age;
	return (nd);
}
