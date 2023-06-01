#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to list to be released
 * Return: freed list
 */

void free_list(list_t *head)
{
	list_t xn;

	while (head)
	{
		xn = head->next;
		free(head->str);
		free(head);
		head = xn;
	}
}
