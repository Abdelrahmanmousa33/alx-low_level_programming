#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a given poistion
 * @head:the list
 * @index:the index
 * Return:1(success) -1(failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *next_node, *node_to_del;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		temp->next->prev = NULL;
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (temp->next->next == NULL)
		{
			next_node = temp->next;
			temp->next = NULL;
			free(next_node);
			return (1);
		}
		if (i == index)
		{
			node_to_del = temp->next;
			next_node = node_to_del->next;
			temp->next = next_node;
			next_node->prev = temp;
			free(node_to_del);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
