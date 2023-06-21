#include "lists.h"
/**
 * add_dnodeint_end - add a node at the the end of doubly linked list
 * @head: the first element
 * @n: the value of the node
 * Return: the adress of new elemnt or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
if (*head == NULL)
	*head = new;
else
{
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
new->prev = temp;
new->next = NULL;
new->n = n;
return (new);
}
