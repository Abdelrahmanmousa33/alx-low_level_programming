#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a node at the end of the list
 * @head:pointer to a pointer to the first node
 * @str:the string to be add
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode;
	list_t *temp = *head;

	NewNode = malloc(sizeof(list_t));
	if (!NewNode)
		return (NULL);
	NewNode->str = strdup(str);
	NewNode->len = strlen(str);
	NewNode->next = NULL;
	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = NewNode;
	return (NewNode);
}
