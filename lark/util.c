#include <stdio.h>
#include <stdlib.h>

#include "errors.h"
#include "util.h"

void * checked_malloc(int size) {
	void * p = malloc(size);

 	if (!p) {
    	error(OUT_OF_MEMORY);
 	}

 	return p;
}