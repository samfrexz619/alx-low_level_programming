#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size
 * Return: hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	hash_node_t **array;
	unsigned long int idx;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		array[idx] = NULL;

	tab->array = array;
	tab->size = size;

	return (tab);
}
