#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a struct that creates dog data
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: defining dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
