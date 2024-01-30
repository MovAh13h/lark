#ifndef _ERROR_
#define _ERROR_

typedef enum Error {
	OUT_OF_MEMORY,
} Error;


void error(Error e);

#endif