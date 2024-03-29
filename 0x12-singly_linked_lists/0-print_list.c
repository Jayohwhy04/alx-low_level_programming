#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a linked list
 * @h: pointer to the list_t list to be printed
 *
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t w = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		w++;
	}

	return (w);
}
