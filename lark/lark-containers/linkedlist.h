#ifndef _LINKED_LIST_
#define _LINKED_LIST_

typedef struct _linked_list {
	void * value;
	struct _linked_list * next;
} * linked_list;

#endif