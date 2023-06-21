#include "lists.h"
/**
 * add_dnodeint - add a node at the begining
 * @head: the first element
 * @n: the value of the node
 * Return: the adress of new elemnt or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new, *temp = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return (NULL);
new->prev = NULL;
new->next = temp;
new->n = n;
if (temp != NULL)
	temp->prev = new;
*head = new;
return (new);
}
