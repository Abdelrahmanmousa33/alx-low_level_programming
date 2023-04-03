#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: the list
 * @index: the index
 * Return: NULL if it doesnot exist or addres of it
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (0);
	for (counter = 0; counter < index; counter++)
	{
		head = head->next;
	}
	return (head);
}
