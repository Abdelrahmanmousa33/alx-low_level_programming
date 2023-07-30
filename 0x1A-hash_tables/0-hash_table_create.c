#include "hash_tables.h"
/**
 * hash_table_create - creats a hash table.
 * @size: size of the array.
 * Return: pointer to the created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	hash_node_t **nodes_array;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	nodes_array = malloc(sizeof(hash_node_t) * size);
	if (nodes_array == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = nodes_array;

	return (new_hash);
}
