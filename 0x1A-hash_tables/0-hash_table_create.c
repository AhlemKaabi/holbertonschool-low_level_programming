#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}
	my_hash_table = malloc(sizeof(hash_node_t));
	if (my_hash_table == NULL)
	{
		return (NULL);
	}
	my_hash_table->array = malloc(sizeof(hash_node_t) * size);
	for (i = 0; i < size; i++)
	{
		my_hash_table->array[i] = NULL;
	}

	return (my_hash_table);
}
