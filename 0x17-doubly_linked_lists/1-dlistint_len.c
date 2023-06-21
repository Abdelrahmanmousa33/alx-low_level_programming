#include "lists.h"
/**
 * dlistint_len - return number of elemts in a linked list
 * @h: the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int nodes_count = 0;

if (h == NULL)
	return (0);
while (h != NULL)
{
	nodes_count++;
	h = h->next;
}
return (nodes_count);
}
