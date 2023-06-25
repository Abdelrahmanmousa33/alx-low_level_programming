#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node
 * @h: the list
 * @idx: the index
 * @n: the node value
 * Return: the new node address or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *next_node, *head = *h;
	unsigned int i = 1;

	newnode = malloc(sizeof(dlistint_t));
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (head->next == NULL)
			{
				newnode = add_dnodeint_end(h, n);
			}
			next_node = (head)->next;
			(head)->next = newnode;
			newnode->prev = head;
			newnode->next = next_node;
			next_node->prev = newnode;
			return (newnode);
		}
		head = (head)->next;
		i++;
	}
	return (NULL);
}
