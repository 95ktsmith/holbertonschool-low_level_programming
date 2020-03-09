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
	dog_t *dog;
	char *name_cpy = name;
	char *owner_cpy = owner;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL || name == NULL || owner == NULL)
		return (NULL);

	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	free(name_cpy);
	free(owner_cpy);
	return (dog);
}
