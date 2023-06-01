#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * *add_node -  adds new node to beginning of list
 * @str: string to be added
 * @head: first node of list
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t xin;
	int len = 0;

	xin = malloc(sizeof(list_t));
	if (xin == NULL)
		return (NULL);

	while (str[len])
		len++;

	xin->len = len;
	xin->str = strdup(str);
	xin->next = (*head);
	(*head) = xin;

	return (*head);
}
