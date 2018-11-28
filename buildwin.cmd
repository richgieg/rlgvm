@echo off
clang ^
    src/main.c ^
    src/vm/vm.c ^
    src/cpu/cpu.c ^
    -o bin/rlgvmwin.exe
