#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct dog - dog information
 * @name: dog name
 * @age: dog age
 * @owner: name of owner
 *
 * Description: store of information for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _HOLBERTON_H_ */
