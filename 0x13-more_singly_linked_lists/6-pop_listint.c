#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delets the head node
 *@head: pointer to pointer to the first node
 * Return:the data in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int NodeData;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	NodeData = temp->n;
	free(temp);
	return (NodeData);
}
