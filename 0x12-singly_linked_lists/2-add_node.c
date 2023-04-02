#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - add a node at the beggining of the list
 * @head:pointer to the first node
 * @str:the string to be add
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupStr = strdup(str);
	list_t *temp = malloc(sizeof(list_t));
	list_t *newNode = temp;

	if (head == NULL || temp == NULL)
		return (NULL);
	newNode->next = *head;
	*head = temp;
	newNode->str = dupStr;
	newNode->len = strlen(dupStr);
	return (*head);
}
