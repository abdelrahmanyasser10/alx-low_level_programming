#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: ptr
 * @name: first member
 * @age: seconde member
 * @owner: third member
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
