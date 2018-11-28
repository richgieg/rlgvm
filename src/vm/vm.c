#include <malloc.h>
#include "vm.h"

struct vm * newvm()
{
    struct vm *vm = malloc(sizeof(struct vm));
    vm->cpu = newcpu();
    return vm;
}

void delvm(struct vm *vm)
{
    delcpu(vm->cpu);
    free(vm);
}

void printvm(struct vm *vm)
{
    printcpu(vm->cpu);
}
