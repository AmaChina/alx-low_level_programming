#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * *_strcpy - copy string
 * @dest: pointer to the buffer
 * @src: string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l, n;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (n = 0; n < l; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * *new_dog - creates new dog
 * @name: first input
 * @age: second input
 * @owner: third input
 * Return: pointer to new dog otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (b + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
