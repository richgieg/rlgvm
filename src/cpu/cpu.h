struct cpu
{
    unsigned int eax;
    unsigned int ebx;
    unsigned int ecx;
    unsigned int edx;
};

struct cpu * newcpu();
void delcpu(struct cpu *);
void printcpu(struct cpu *);
