#include "vm/vm.h"

int main()
{
    struct vm *vm = newvm();
    printvm(vm);
    delvm(vm);
}
