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

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		m++;
	}
	return (m);
}
