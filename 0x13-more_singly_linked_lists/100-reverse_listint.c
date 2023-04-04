#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses al list
 * @head: pointer to apointer to alist
 * Return: pointer to the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *secound = NULL;

	while ((*head) != NULL)
	{
		secound = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = secound;
	}
	*head = first;
	return (*head);
}
