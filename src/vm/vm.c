#include <malloc.h>
#include "vm.h"

struct vm * newvm(unsigned int memsize)
{
    struct vm *vm = malloc(sizeof(struct vm));
    vm->mem = newmem(memsize);
    vm->cpu = newcpu(vm->mem);
    return vm;
}

void delvm(struct vm *vm)
{
    delmem(vm->mem);
    delcpu(vm->cpu);
    free(vm);
}

void printvm(struct vm *vm)
{
    printmem(vm->mem);
    printcpu(vm->cpu);
}
