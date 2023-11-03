#include "hash_tables.h"
#include <stdbool.h>

/**
 * hash_tables_delete - deletes a hash table
 * @ht: hash table to have memory freed
 */

void hash_table_delete(hash_table_t *ht);
{
	unsigned long int index, j;
	hash_node_t *head = NULL, *temp = NULL;

	if (ht && ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			head = (ht->array[index])
			{
				head = ht->array[index];
				temp = head;
			}
			for (j = 0; head; j++)
			{
				temp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
