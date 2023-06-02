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
	list_t *sbj;

	while (head)
	{
		sbj = head->next;
		free(head->str);
		free(head);
		head = sbj;
	}
}
