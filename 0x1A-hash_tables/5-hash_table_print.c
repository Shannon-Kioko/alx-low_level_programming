#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int first_pair;
	unsigned long int i;
	
	if (ht == NULL)
		return;
	
	printf("{");

	first_pair = 1;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_pair = 0;

			node = node->next;
		}
	}

	printf("}\n");
}
