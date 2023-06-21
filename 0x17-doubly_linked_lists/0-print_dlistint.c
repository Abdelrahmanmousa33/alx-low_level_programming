#include "lists.h"
/**
 * print_dlistint - prints a double linked lists
 * @h: the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int nodes_count = 0;

if (h == NULL)
	return (0);
while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	nodes_count++;
}
return (nodes_count);
}
