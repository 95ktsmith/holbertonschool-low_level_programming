#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print dog
 * Description: prints the variables of a type struct dog
 * @d: pointer to a dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}