#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints number of nodes in a list
 * @h:the list
 * Return:number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t NodesCount = 0;

	for (; h != NULL;)
	{
		h = h->next;
		NodesCount++;
	}
	return (NodesCount);
}
