#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog
 * Description: creates and returns a new dog with given parameters
 * @name: name to give dog
 * @age: age to give dog
 * @owner: name of owner of dog
 * Return: pointer to type dog_t, or NULL if unsuccessful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int size = 0;
	dog_t *dog;
	char *name_cpy;
	char *owner_cpy;

	dog = malloc(sizeof(struct dog));
	if (!dog)
		return (NULL);

	while (*(name + size))
		size++;
	name_cpy = malloc(size + 1);
	if (!name_cpy)
		return (NULL);
	name_cpy = name;

	size = 0;
	while (*(owner + size))
		size++;
	owner_cpy = malloc(size + 1);
	if (!owner_cpy)
		return (NULL);
	owner_cpy = owner;

	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}
