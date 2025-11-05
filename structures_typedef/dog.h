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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
