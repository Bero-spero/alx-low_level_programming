#include<stdlib.h>
#include<string.h>
#include"dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog _t *dog;
	unsigned int nameLen, ownerLen, i;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	nameLen = strlen(name) + 1;
	dog->name = malloc(sizeof(char) * nameLen);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < nameLen; i++)
		dog->name[i] = name[i];

	dog->age = age;

	ownerLen = strlen(owner) + 1;
	dog->owner = malloc(sizeof(char) * ownerLen);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < ownerLen; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
