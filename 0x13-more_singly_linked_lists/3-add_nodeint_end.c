#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head :poiter to a pointer to a linked list
 * @n: the node data
 * Return:null if failed or address of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (NewNode == NULL)
		return (NULL);
	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
		*head = NewNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = NewNode;
	}
	return (NewNode);
}
