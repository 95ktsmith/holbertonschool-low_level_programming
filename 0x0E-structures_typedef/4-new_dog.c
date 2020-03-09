#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

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
	char *name_cpy;
	char *owner_cpy;
	float *age_cpy;

	dog = malloc(sizeof(struct dog));
	if (!dog)
		return (NULL);
	age_cpy = malloc(sizeof(float));
	if (!age_cpy)
		return (NULL);

	*age_cpy = age;
	name_cpy = _strdup(name);
	owner_cpy = _strdup(owner);

	dog->name = name_cpy;
	dog->age = *age_cpy;
	dog->owner = owner_cpy;

	return (dog);
}

/**
 * _strdup - string duplicate
 * Description: Duplicates a string
 * @str: Source string
 * Return: Pointer to newly created string
 */

char *_strdup(char *str)
{
	int index, size;
	char *dst;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size))
		size++;

	dst = malloc(size + 1);
	if (dst == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		*(dst + index) = *(str + index);

	*(dst + index) = '\0';

	return (dst);
}
