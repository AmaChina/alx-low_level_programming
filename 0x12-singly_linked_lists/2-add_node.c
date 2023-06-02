#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* _strlen - prints string length
* @s: input value
* Return: string length
*/
int _strlen(const char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
 * *add_node -  adds new node to beginning of list
 * @str: string to be added
 * @head: first node of list
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
	{
		return (NULL);
	}
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	add = *head;

	return (*head);
}
