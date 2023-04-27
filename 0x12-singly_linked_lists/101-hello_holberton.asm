section .data
    greet db 'Hello, Holberton!', 0xa, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [greet]
    mov eax, 0
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
