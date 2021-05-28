#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;

	if (size == 0)
	{
		return (NULL);
	}
	my_hash_table = malloc(sizeof(unsigned long int) * size);
	if (my_hash_table == NULL)
	{
		return (NULL);
	}
	return (my_hash_table);
}
