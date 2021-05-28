#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: The hash table you want to look into.
 * @key:The key you are looking for.
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
		return (NULL);
		/*key couldn't be found*/
	}

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)/*matchs*/
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
