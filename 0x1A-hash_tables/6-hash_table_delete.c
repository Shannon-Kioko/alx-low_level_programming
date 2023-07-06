/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			current = node;
			node = node->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}

	free(ht->array);
	free(ht);
}
