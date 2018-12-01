#include "vm/vm.h"

const unsigned int MEM_SIZE = 1024 * 1024 * 256; // 16 MB

int main()
{
    struct vm *vm = newvm(MEM_SIZE);
    printvm(vm);
    delvm(vm);
}
