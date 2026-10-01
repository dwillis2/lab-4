.section .bss

.section .text
.global get_sum

get_sum:
    mov $0, %eax
    .loop:
        addl (%rdi, %rcx, 4), %eax
        incl %ecx 
        cmpl %esi, %ecx
        jl .loop
ret 
.section .note.GNU-stack,"",@progbits
