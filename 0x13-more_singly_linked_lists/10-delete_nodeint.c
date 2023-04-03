#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delelte a node
 * @head: the list
 * @index:the index
 * Return: 1 sucess -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *tempToFree;
	unsigned int counter;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (counter = 1; counter < index; counter++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	tempToFree = temp->next;
	temp->next = tempToFree->next;
	free(tempToFree);
	return (1);
}
