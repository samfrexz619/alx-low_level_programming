#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated to a key
 * @ht: pointer
 * @key: key
 * Return: value of the hash
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	key_idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[key_idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
