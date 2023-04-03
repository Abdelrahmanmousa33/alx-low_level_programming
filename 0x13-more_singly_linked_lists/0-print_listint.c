#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints alist
 * @h:the list
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t NodesCount = 0;

	for (; h != NULL;)
	{
		printf("%d\n", h->n);
		h = h->next;
		NodesCount++;
	}
	return (NodesCount);
}
