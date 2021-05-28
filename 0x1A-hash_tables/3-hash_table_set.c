#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const char *value_cp;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}
	if (key == (const char *)"")
	{
		return (0);
	}
	/* get the index */
	index = key_index((const unsigned char *)key, ht->size);
	/* create a node */
	node->key = (char *)key;
	value_cp = strdup(value);
	node->value = (char *)value_cp;
	node->next = NULL;

	ht->array[index] = node;

	return (1);
}