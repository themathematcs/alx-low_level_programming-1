#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

/**
 * struct dog - information about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif