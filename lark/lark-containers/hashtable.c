#include <stdlib.h>
#include <assert.h>

#include "lark/util.h"
#include "lark/errors.h"
#include "hashtable.h"

hash_table ht_new() {
	hash_table new_table = checked_malloc(sizeof(hash_table));

	if (new_table == NULL) {
		return NULL;
	}

	return new_table;
}

void ht_insert(hash_table ht, void * key, void * val) {
	assert(ht && key);
	
}

void * ht_remove(hash_table ht, void * key) {
	
	return NULL;
}
