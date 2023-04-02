#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all elemnts of a list
 * @h: the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodesCount = 0;

	for (;;)
	{
	nodesCount++;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	if (h->next == NULL)
		break;
	h = h->next;
	}
	return (nodesCount);
}
