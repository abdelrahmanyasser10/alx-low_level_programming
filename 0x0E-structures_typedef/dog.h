#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a data type for dog
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: defined data type to store the information about a dog
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
