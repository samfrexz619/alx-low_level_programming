#include "hash_taibles.h"

/**
 * add_hashN - adds a node at the beginning
 * @hd: head
 * @key: key
 * @value: value
 * Return: head of the hash
 */
hash_node_t *add_hashN(hash_node_t **hd, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *hd;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*hd);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *hd;
	*hd = tmp;

	return (*hd);
}

/**
 * hash_table_set - adds hash to a hash table
 * @ht: pointer
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	key_idx = key_index((unsigned char *)key, ht->size);

	if (add_hashN(&(ht->array[key_idx]), key, value) == NULL)
		return (0);

	return (1);
}
