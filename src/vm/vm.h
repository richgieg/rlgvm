#include "../cpu/cpu.h"

struct vm
{
    struct cpu *cpu;
};

struct vm * newvm();
void delvm(struct vm *);
void printvm(struct vm *);
