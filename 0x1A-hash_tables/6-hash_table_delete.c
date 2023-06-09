#include "hash_tables.c"

/**
 * hash_table_delete - del hash table
 * @ht: pointer
 * Return: nth
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while ((tmp2 = tmp) != NULL)
		{
			tmp = tmp2->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
