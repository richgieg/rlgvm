#ifndef VM_H
#define VM_H

#include "../mem/mem.h"
#include "../cpu/cpu.h"

struct vm
{
    struct mem *mem;
    struct cpu *cpu;
};

struct vm * newvm(unsigned int memsize);
void delvm(struct vm *);
void printvm(struct vm *);

#endif
