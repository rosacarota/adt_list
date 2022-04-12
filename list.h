#include "item.h"

typedef struct List *List;

List newList(void);

List insertHead(List list, item val);

void printList(List list);

void freeList(List list);
