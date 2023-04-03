#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees alist and sets head to null
 * @head: the list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
}
