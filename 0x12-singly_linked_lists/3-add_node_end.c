#include "lists.h"
#include <stdlib.c>
#include <string.h>
/**
 * *add_node_end - adds nope to end of list
 * @str: string
 * @head: head of list
 * Return: address of new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	size_t c;

	new_node = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);

	for (c = 0; str[c]; c++)
		;
	a->len = c;
	a->aft = NULL;
	b = *head;

	if (b == NULL)
	{
		*head = a;
	}
	else
	{
		while (b->aft != NULL)
			b = b->aft;
		b->aft = a;
	}

	return (*head);
}
