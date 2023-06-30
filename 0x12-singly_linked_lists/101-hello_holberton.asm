section .data
    message db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; write the message to stdout
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 16
    syscall

    ; exit the program
    mov eax, 60
    xor edi, edi
    syscall
