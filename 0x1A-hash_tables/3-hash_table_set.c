#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure(0) else (1)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int h_code;

	if (ht == NULL)
		return (0);

     	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	h_code = key_index((const unsigned char *)key, ht->size);
	new_node->key = (char *)h_code;
	new_node->value = (char *)value;

	if (ht->array[h_code] == NULL)
	{
		new_node->next = NULL;
		ht->array[h_code] = new_node;
		return (1);
	}
	else
	{
		new_node->next = ht->array[h_code];
		ht->array[h_code] = new_node;
		return (1);
	}
}
