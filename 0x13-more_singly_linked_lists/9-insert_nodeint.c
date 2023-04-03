#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given poistion
 * @head:the list
 * @idx:the index
 * @n: the node data
 * Return:the addres of the new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int counter;
	listint_t *NewNode = malloc(sizeof(listint_t));

	NewNode->n = n;
	if (idx == 0)
	{
		NewNode->next = temp;
		*head = NewNode;
		return (NewNode);
	}
	for (counter = 0; temp != NULL; counter++)
	{
		if ((counter + 1) == idx)
		{
			NewNode->next = temp->next;
			temp->next = NewNode;
		}
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (NewNode);
}
