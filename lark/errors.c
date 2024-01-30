#include <stdio.h>
#include <stdlib.h>

#include "errors.h"

char * errors[] = {
	"Ran out of memory",
};

void error(Error e) {
	fprintf(stderr, "%s", errors[e]);
}

void fatal(Error e) {
	error(e);
	exit(1);
}