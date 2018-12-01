#ifndef CPU_H
#define CPU_H

#include "../mem/mem.h"

struct cpu
{
    struct mem *mem;
    unsigned int eax;
    unsigned int ebx;
    unsigned int ecx;
    unsigned int edx;
};

struct cpu * newcpu(struct mem *mem);
void delcpu(struct cpu *);
void printcpu(struct cpu *);

#endif
