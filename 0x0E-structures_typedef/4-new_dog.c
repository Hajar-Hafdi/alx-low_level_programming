#include "dog.h"
#include <stdlib.h>

/**
 * _strlenn - a function that gets a length of a string
 *
 * @str: the string
 *
 * Return: length of @str
 */
int _strlenn(const char *str)
{
	int leng = 0;

	while (*str++)
		leng++;
	return (leng);
}
/**
 * _strcpy - a function that returns @dest with acopy of str from @src
 *
 * @src: string
 * @dest: copy of str
 *
 * Return: returns @dest
 */
char *_strcpy(char *dest, char *src)
{
	int u;

	for (u = 0; src[u]; u++)
		dest[u] = src[u];
	dest[u] = '\0';
	return (dest);
}
/**
 * *new_dog - a function that creates new dogg
 *
 * @name: name of the dog to be created
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: struct pointer dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlenn(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlenn(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
