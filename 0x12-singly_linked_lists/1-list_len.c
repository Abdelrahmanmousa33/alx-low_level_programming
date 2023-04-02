#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - return number of nodes
 * @h: the lsit
 * Return: nodes count
 */
size_t list_len(const list_t *h)
{
	size_t nodesCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodesCount++;
	}
	return (nodesCount);
}
