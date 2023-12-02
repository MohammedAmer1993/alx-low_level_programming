#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: the size of hash table
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = NULL;
}
