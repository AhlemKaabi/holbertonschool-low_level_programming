#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL, *tmp = NULL;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (curr != NULL)
		{
			curr->next = tmp;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
		free(ht->array[i]);
	}
	free(ht->array);
}
