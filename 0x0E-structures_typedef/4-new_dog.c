#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - Finds the length of a string
 * @s: The string to be measured
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age:  age of the dog
 * @owner: name of th owner
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	New = malloc(sizeof(dog_t));
	if (New == NULL)
		return (NULL);
	New->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (New->name == NULL)
	{
		free(New);
		return (NULL);
	}
	New->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (New->owner == NULL)
	{
		free(New->name);
		free(New);
		return (NULL);
	}
	New->name = _strcopy(New->name, name);
	New->age = age;
	New->owner = _strcopy(New->owner, owner);
	return (New);
}
