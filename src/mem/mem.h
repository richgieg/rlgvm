#ifndef MEM_H
#define MEM_H

struct mem
{
    char *bytes;
    unsigned int size;
};

struct mem * newmem(unsigned int size);
void delmem(struct mem *);
void printmem(struct mem *);
char getbyte(struct mem *mem, unsigned int address);
void setbyte(struct mem *mem, unsigned int address, char byte);

#endif
