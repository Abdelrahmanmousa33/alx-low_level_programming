#include "hash_tables.h"
/**
 * hash_table_create - creats a hash table.
 * @size: size of the array.
 * Return: pointer to the created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (size == NULL)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));
	new_hash->size = size;

	return (new_hash);
}
