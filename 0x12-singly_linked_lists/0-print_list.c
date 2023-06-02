#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints elements of list
 * @h: points to list to be worked on
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}
	return (m);
}
