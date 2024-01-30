#ifndef _HASH_TABLE_
#define _HASH_TABLE_

typedef struct _hash_table {

} * hash_table;

hash_table ht_new();

void ht_insert(hash_table ht, void * key, void * val);

void * ht_remove(hash_table ht, void * key);

#endif