%define PRINTF  printf

%macro PRINT_HELLO 64
    push        rax       ; save rax
    push        rbx       ; save rbx

    ; Set up the format string
    mov     rax, 0x165a   ; move 0x165a (Hello) into RAX
    mov     rbx, 0xffff   ; move 0xffff (A) into RBX

    ; Print the format string
    PRINTF   %*i

    ; Set up the second half of the format string
    mov     rax, 0      ; move 0 into RAX
    mov     rbx, 0      ; move 0 into RBX
    mov     rdx, 0xffff  ; move 0xffff into RDX
    mov     rcx, 0      ; move 0 into RCX
    mov     r8, 0       ; move 0 into R8
    mov     r9, 0       ; move 0 into R9
    mov     r10, 0      ; move 0 into R10
    mov     r11, 0      ; move 0 into R11

    ; Print the format string
    PRINTF   "Holberton"

    ; Print a new line
    mov     rax, 0x0010  ; move 0x0010 (new line) into RAX
    PRINTF   %*x

    ; Exit
    mov     eax, 1      ; set exit code to success
    int     0x80         ; call the BIOS interrupt to exit the program

PRINT_HELLO

