#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head:pointe to the first node
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
