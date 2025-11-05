#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that stores information about a dog
 * @name: pointer to the dog's name (string)
 * @age: dog's age (float)
 * @owner: pointer to the owner's name (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif /* DOG_H */
