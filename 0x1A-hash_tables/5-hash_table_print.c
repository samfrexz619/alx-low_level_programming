#include "hash_tables.h"

/**
 * hash_table_print - prints key and val
 * @ht: pointer
 * Return: nth
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp;
	char *sp;

	if (ht == NULL)
		return;

	printf("{");
	sp = "";

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sp, tmp->key, tmp->value);
			sp = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
