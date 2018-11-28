#include <malloc.h>
#include <stdio.h>
#include "cpu.h"

struct cpu * newcpu()
{
    struct cpu *cpu = malloc(sizeof(struct cpu));
    cpu->eax = 0;
    cpu->ebx = 0;
    cpu->ecx = 0;
    cpu->edx = 0;
    return cpu;
}

void delcpu(struct cpu *cpu)
{
    free(cpu);
}

void printcpu(struct cpu *cpu)
{
    printf("eax:%x ebx:%x ecx:%x edx:%x\n", cpu->eax, cpu->ebx, cpu->ecx, cpu->edx);
}
