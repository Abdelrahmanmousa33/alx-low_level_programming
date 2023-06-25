#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list
 * @head: the linked list
 * @index: the node index
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index && head != NULL)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
