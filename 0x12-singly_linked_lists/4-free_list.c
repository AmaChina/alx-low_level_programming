#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to list to be released
 * Return: freed list
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list->head;
	if (head->str)
		free(head->str);
	free(head);
	}
}
