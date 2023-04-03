#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at the begining
 * @head :poiter to a pointer to a linked list
 * @n: the node data
 */ 
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode = malloc(sizeof(listint_t));
	
	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;
	return (NewNode);
}
