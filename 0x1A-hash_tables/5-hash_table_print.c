#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int separator;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	i = 0;
	separator = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (separator == 1)
			{
				printf(", ");
			}
			printf("\'%s\' : \'%s\'", current->key, current->value);
			separator = 1;
			current = current->next;
		}
		i++;
	}
	printf("}\n");
}
