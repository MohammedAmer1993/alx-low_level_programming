#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: the size of hash table
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = NULL;
	for (i = 0; i < size; ++i)
	{
		ht->array[i] = malloc(sizeof(hash_node_t))
		if (ht->array[i] == NULL)
			return (NULL);
		ht->array[i] = NULL
	}
	return (ht);
}
