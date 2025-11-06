#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to struct dog
 *
 * Description: Prints each member of the struct.
 * If a string member is NULL, prints (nil) instead.
 * If the struct pointer is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
