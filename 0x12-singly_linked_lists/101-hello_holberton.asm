section .data
    hello db "Hello, Holberton", 10, 0
    format db "%s", 10, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rsi, hello
    mov rdi, format
    xor eax, eax
    call printf

    mov eax, 0
    leave
    ret
