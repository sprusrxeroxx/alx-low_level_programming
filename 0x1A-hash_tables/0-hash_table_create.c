#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of an integer for size length 
 *
 * Returns: a pointer to the newly created hash table
 */

hash_table_t* hash_table_create(int size)
{
    // Creates a new HashTable.
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    table->size = size;
    table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));

    for (int i = 0; i < table->size; i++)
        table->array[i] = NULL;

    return table;
}
