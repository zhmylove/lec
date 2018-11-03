.globl _start
_start:
pushq $2
movq $1, %rax
int $0x80
