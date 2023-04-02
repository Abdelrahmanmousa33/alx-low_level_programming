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
	if (h->str == NULL)
		printf("[0] (nil)");
	else
		printf("[%u] %s", h->len, h->str);
	if (h->next == NULL)
		break;
	h = h->next;
	nodesCount++;
	}
	return (nodesCount);
}
