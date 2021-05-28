#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	current = ht->array[0];
	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("\'%s\' : \'%s\'", current->key, current->value);
			/*add condition!*/
			printf(", ");
			current = current->next;
		}
		i++;
	}
	printf("}\n");
}
