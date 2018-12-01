#include <malloc.h>
#include <stdio.h>
#include "mem.h"

struct mem * newmem(unsigned int size)
{
    struct mem *mem = malloc(sizeof(struct mem));
    mem->bytes = malloc(size);
    mem->size = size;
    return mem;
}

void delmem(struct mem *mem)
{
    free(mem->bytes);
    free(mem);
}

void printmem(struct mem *mem)
{
    printf("memory size (bytes): %u\n", mem->size);
}
