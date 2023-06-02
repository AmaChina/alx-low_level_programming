#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to list to be released
 * Return: freed list
 */

void free_list(list_t *head)
{
	list_t *b;
	
	while ((b = head) != NULL)
	{
		head = head->next;
		free(b->str);
		free(b);
	}
}
