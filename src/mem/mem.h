#ifndef MEM_H
#define MEM_H

struct mem
{
    unsigned char *bytes;
    unsigned int size;
};

struct mem * newmem(unsigned int size);
void delmem(struct mem *);
void printmem(struct mem *);

#endif
