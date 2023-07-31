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
	unsigned long int h_code, i;
	char *value_copy, *key_copy;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	value_copy = strdup(value);
	key_copy = strdup(key);
	if (value_copy == NULL || key_copy)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}
	h_code = key_index((const unsigned char *)key, ht->size);
	for (i = h_code; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new_node->key = key_copy;
	new_node->value = value_copy;
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
