/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 if the operation succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	char *key_copy = strdup(key);
	char *value_copy = (value != NULL) ? strdup(value) : NULL;
	if (value != NULL && value_copy == NULL)
	{
		free(new_node);
		free(key_copy);
		return (0);
	}
	new_node->key = key_copy;
	new_node->value = value_copy;


	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}
